#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int left, int right) {
    int answer = 0, index = 0;
    vector<int> a;

    for (int i = left; i <= right; i++) {
        a.push_back(i);
    }

    for (int i = 0; i < a.size(); i++) {
        index = 0;
        for (int j = 1; j <= a[i]; j++) {
            if (a[i] % j == 0) {
                index++;
            }
        }

        if (index % 2) {
            a[i] *= -1;
        }
    }

    for (int i = 0; i < a.size(); i++) {
        answer += a[i];
    }

    return answer;
}

int main()
{
    int answer;

    answer = solution(13, 17);
    cout << answer << endl;
    return 0;
}


//����� ������ ����
//���� ����
//�� ���� left�� right�� �Ű������� �־����ϴ�.left���� right������ ��� ���� �߿���, ����� ������ ¦���� ���� ���ϰ�, ����� ������ Ȧ���� ���� �� ���� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//
//���ѻ���
//1 �� left �� right �� 1, 000
//����� ��
//left	right	result
//13	17	43
//24	27	52
//����� �� ����
//����� �� #1
//
//���� ǥ�� 13���� 17������ ������ ����� ��� ��Ÿ�� ���Դϴ�.
//��	���	����� ����
//13	1, 13	2
//14	1, 2, 7, 14	4
//15	1, 3, 5, 15	4
//16	1, 2, 4, 8, 16	5
//17	1, 17	2
//����, 13 + 14 + 15 - 16 + 17 = 43�� return �ؾ� �մϴ�.
//����� �� #2
//
//���� ǥ�� 24���� 27������ ������ ����� ��� ��Ÿ�� ���Դϴ�.
//��	���	����� ����
//24	1, 2, 3, 4, 6, 8, 12, 24	8
//25	1, 5, 25	3
//26	1, 2, 13, 26	4
//27	1, 3, 9, 27	4
//����, 24 - 25 + 26 + 27 = 52�� return �ؾ� �մϴ�.