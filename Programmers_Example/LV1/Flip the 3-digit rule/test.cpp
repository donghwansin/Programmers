#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> a;
    //vector<int> b;
    int index = 0, temp = 0;

    for (int i = 0; i < n; i++) {
        if (n < pow(3, i)) {
            index = i - 1;
            break;
        }
    }

    for (int i = index; i >= 0; i--) {
        if ((n - pow(3, i)) >= 0) {
            n -= pow(3, i);
            temp++;
        }
        if (n >= pow(3, i)) {
            i++;
            continue;
        }
        else {
            a.push_back(temp);
            temp = 0;
        }
    }
    // �� �� ���� 3���� : ��ǻ� �ǹ̾���
    //for (int i = a.size() - 1; i >= 0; i--) {
    //    b.push_back(a[i]);
    //}
    for (int i = 0; i < a.size(); i++) {
        answer += a[i] * pow(3, i);
    }

    return answer;
}

int main()
{
    int answer;
    answer = solution(45);
    cout << answer << endl;
    return 0;
}

//3���� ������
//���� ����
//�ڿ��� n�� �Ű������� �־����ϴ�.n�� 3���� �󿡼� �յڷ� ������ ��, �̸� �ٽ� 10�������� ǥ���� ���� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//
//���ѻ���
//n�� 1 �̻� 100, 000, 000 ������ �ڿ����Դϴ�.
//����� ��
//n	result
//45	7
//125	229
//����� �� ����
//����� �� #1
//
//���� �����ϴ� ������ ������ �����ϴ�.
//n(10����)	n(3����)	�յ� ����(3����)	10�������� ǥ��
//45	1200	0021	7
//���� 7�� return �ؾ� �մϴ�.
//����� �� #2
//
//���� �����ϴ� ������ ������ �����ϴ�.
//n(10����)	n(3����)	�յ� ����(3����)	10�������� ǥ��
//125	11122	22111	229
//���� 229�� return �ؾ� �մϴ�.