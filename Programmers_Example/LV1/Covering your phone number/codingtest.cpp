#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    string answer = phone_number, star = "";

    if (phone_number.size() > 4)
    {
        for (int i = 0; i < phone_number.size() - 4; i++)
        {
            star.push_back('*');
        }

        answer = phone_number.replace(0, phone_number.size() - 4, star);
    }

    return answer;
}

int main()
{
    string answer;

    answer = solution("01033334444");
    cout << answer << endl;

    return 0;
}

//�ڵ��� ��ȣ ������
//���� ����
//���α׷��ӽ� ������� �������� ��ȣ�� ���� �������� ���� �� ������ ��ȭ��ȣ�� �Ϻθ� �����ϴ�.
//��ȭ��ȣ�� ���ڿ� phone_number�� �־����� ��, ��ȭ��ȣ�� �� 4�ڸ��� ������ ������ ���ڸ� ���� * ���� ���� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
//
//���� ����
//s�� ���� 4 �̻�, 20������ ���ڿ��Դϴ�.
//����� ��
//phone_number	return
//"01033334444"	"*******4444"
//"027778888"	"*****8888"