#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}

int main()
{
    int answer;

    answer = solution(12);
    cout << answer << endl;
    return 0;
}

//����� ��
//���� ����
//���� n�� �Է¹޾� n�� ����� ��� ���� ���� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
//
//���� ����
//n�� 0 �̻� 3000������ �����Դϴ�.
//����� ��
//n	return
//12	28
//5	6
//����� �� ����
//����� �� #1
//12�� ����� 1, 2, 3, 4, 6, 12�Դϴ�.�̸� ��� ���ϸ� 28�Դϴ�.
//
//����� �� #2
//5�� ����� 1, 5�Դϴ�.�̸� ��� ���ϸ� 6�Դϴ�.