#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.size();

    if (len < 3)
        return s;
    
    if (len % 2 == 0) {
        answer.push_back(s[(len / 2) - 1]);
        answer.push_back(s[(len / 2)]);
    } else {
        answer = s[len / 2];
    }

    return answer;
}

int main()
{
    string answer;

    answer = solution("qwer");
    cout << answer << endl;
    return 0;
}

//��� ���� ��������
//���� ����
//�ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������.�ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.
//
//���ѻ���
//s�� ���̰� 1 �̻�, 100������ ��Ʈ���Դϴ�.
//����� ��
//s	return
//"abcde"	"c"
//"qwer"	"we"