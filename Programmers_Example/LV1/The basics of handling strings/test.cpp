#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if (s.size() == 4 || s.size() == 6) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] < '0' || s[i] > '9') {
                answer = false;
                break;
            }
        }
    } else {
        answer = false;
    }
    
    return answer;
}

int main()
{
    bool answer;

    answer = solution("1234");
    cout << answer << endl;

    return 0;
}

//���ڿ� �ٷ�� �⺻
//���� ����
//���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ�, solution�� �ϼ��ϼ���.���� ��� s�� "a234"�̸� False�� �����ϰ� "1234"��� True�� �����ϸ� �˴ϴ�.
//
//���� ����
//s�� ���� 1 �̻�, ���� 8 ������ ���ڿ��Դϴ�.
//����� ��
//s	return
//"a234"	false
//"1234"	true