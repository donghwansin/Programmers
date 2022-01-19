#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_num = 0, y_num = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' || s[i] == 'P') {
            p_num++;
        } else if (s[i] == 'y' || s[i] == 'Y') {
            y_num++;
        }
    }

    answer = p_num == y_num ? true : false;

    return answer;
}

int main()
{
    bool answer;

    answer = solution("pPoooyY");
    cout << answer << endl;
    return 0;
}
//���ڿ� �� p�� y�� ����
//���� ����
//�빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�.s�� 'p'�� ������ 'y'�� ������ ���� ������ True, �ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���. 'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�.��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.
//
//���� ��� s�� "pPoooyY"�� true�� return�ϰ� "Pyy"��� false�� return�մϴ�.
//
//���ѻ���
//���ڿ� s�� ���� : 50 ������ �ڿ���
//���ڿ� s�� ���ĺ����θ� �̷���� �ֽ��ϴ�.
//����� ��
//s	answer
//"pPoooyY"	true
//"Pyy"	false
//����� �� ����
//����� �� #1
//'p'�� ���� 2��, 'y'�� ���� 2���� �����Ƿ� true�� return �մϴ�.
//
//����� �� #2
//'p'�� ���� 1��, 'y'�� ���� 2���� �ٸ��Ƿ� false�� return �մϴ�.
//
//�� ���� - 2021�� 8�� 23�� �׽�Ʈ���̽��� �߰��Ǿ����ϴ�.