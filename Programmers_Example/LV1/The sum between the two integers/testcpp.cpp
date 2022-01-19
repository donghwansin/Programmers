#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    if (a == b) return a;

    long long min = (a < b) ? a : b;
    long long max = (a < b) ? b : a;

    for (long long i = min; i <= max; i++) {
        answer += i;
    }

    return answer;
}

int main()
{
    long long answer;

    answer = solution(3, 5);
    cout << answer << endl;
    return 0;
}

//�� ���� ������ ��
//���� ����
//�� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
//���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.
//
//���� ����
//a�� b�� ���� ���� �� �� �ƹ� ���� �����ϼ���.
//a�� b�� - 10, 000, 000 �̻� 10, 000, 000 ������ �����Դϴ�.
//a�� b�� ��Ұ���� ���������� �ʽ��ϴ�.
//����� ��
//a	b	return
//3	5	12
//3	3	3
//5	3	12