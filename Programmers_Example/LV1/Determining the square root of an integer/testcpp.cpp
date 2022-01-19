#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    for (long long i = 1; i < sqrt(50000000000000); i++)
    {
        if (pow(i, 2) == n) {
            answer = pow((i + 1), 2);
            break;
        }
        else {
            answer = -1;
        }
    }

    return answer;
}

int main()
{
    long long answer = 0;
   
    answer = solution(121);
    cout << answer << endl;
    return 0;
}

//���� ������ �Ǻ�
//���� ����
//������ ���� ���� n�� ����, n�� � ���� ���� x�� �������� �ƴ��� �Ǵ��Ϸ� �մϴ�.
//n�� ���� ���� x�� �����̶�� x + 1�� ������ �����ϰ�, n�� ���� ���� x�� ������ �ƴ϶�� - 1�� �����ϴ� �Լ��� �ϼ��ϼ���.
//
//���� ����
//n�� 1�̻�, 50000000000000 ������ ���� �����Դϴ�.
//����� ��
//n	return
//121	144
//3 - 1
//����� �� ����
//����� ��#1
//121�� ���� ���� 11�� �����̹Ƿ�, (11 + 1)�� ������ 144�� �����մϴ�.
//
//����� ��#2
//3�� ���� ������ ������ �ƴϹǷ�, -1�� �����մϴ�.