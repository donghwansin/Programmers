#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    int index = 0;

    while (index < n) {
        if (index % 2 == 0) {
            answer += "��";
        } else {
            answer += "��";
        }
        index++;
    }

    return answer;
}

int main()
{
    string answer;

    answer = solution(3);
    cout << answer << endl;

    return 0;
}
//
//���ڼ��ڼ��ڼ��ڼ��ڼ� ?
//���� ����
//���̰� n�̰�, "���ڼ��ڼ��ڼ�...."�� ���� ������ �����ϴ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.������� n�� 4�̸� "���ڼ���"�� �����ϰ� 3�̶�� "���ڼ�"�� �����ϸ� �˴ϴ�.
//
//���� ����
//n�� ���� 10, 000������ �ڿ����Դϴ�.
//����� ��
//n	return
//3	"���ڼ�"
//4	"���ڼ���"