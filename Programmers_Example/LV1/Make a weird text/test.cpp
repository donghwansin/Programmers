#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            index = 0;
            continue;
        }
        //case�� ��� �ҹ��ڰ��ƴ϶� ��.�빮�� ���������Ƿ� �װű��� �����ʿ�
        if (index % 2 == 1) {
            if ('A' <= s[i] && s[i] <= 'Z') {
                s[i] += 32;
            }
        } else {
            if ('a' <= s[i] && s[i] <= 'z') {
                s[i] -= 32;
            }
        }
        index++;
    }

    return answer = s;
}

int main()
{
    string answer = "";

    answer = solution("try hello world");
    cout << answer << endl;
    return 0;
}


//�̻��� ���� �����
//���� ����
//���ڿ� s�� �� �� �̻��� �ܾ�� �����Ǿ� �ֽ��ϴ�.�� �ܾ�� �ϳ� �̻��� ���鹮�ڷ� ���еǾ� �ֽ��ϴ�.�� �ܾ��� ¦����° ���ĺ��� �빮�ڷ�, Ȧ����° ���ĺ��� �ҹ��ڷ� �ٲ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.
//
//���� ����
//���ڿ� ��ü�� ¦ / Ȧ�� �ε����� �ƴ϶�, �ܾ�(������ ����)���� ¦ / Ȧ�� �ε����� �Ǵ��ؾ��մϴ�.
//ù ��° ���ڴ� 0��° �ε����� ���� ¦����° ���ĺ����� ó���ؾ� �մϴ�.
//����� ��
//s	return
//"try hello world"	"TrY HeLlO WoRlD"
//����� �� ����
//"try hello world"�� �� �ܾ� "try", "hello", "world"�� �����Ǿ� �ֽ��ϴ�.�� �ܾ��� ¦����° ���ڸ� �빮�ڷ�, Ȧ����° ���ڸ� �ҹ��ڷ� �ٲٸ� "TrY", "HeLlO", "WoRlD"�Դϴ�.���� "TrY HeLlO WoRlD" �� �����մϴ�.