#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int index = 0;
     
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        //char���� ������ �������� 128
        if ('A' <= s[i] && s[i] <= 'Z') {
            if (s[i] + n > 'Z') {
                s[i] = s[i] + n - 1 - 'Z' + 'A';
            } else {
                s[i] += n;
            }
            
        } else {
            if (s[i] + n > 'z') {
                s[i] = s[i] + n - 1 - 'z' + 'a';
            } else {
                s[i] += n;
            }
        }
    }
    return answer = s;
}

int main()
{
    string answer = "";

    answer = solution("AB",1);
    cout << answer << endl;
    return 0;
}

//���� ��ȣ
//���� ����
//� ������ �� ���ĺ��� ������ �Ÿ���ŭ �о �ٸ� ���ĺ����� �ٲٴ� ��ȣȭ ����� ���� ��ȣ��� �մϴ�.���� ��� "AB"�� 1��ŭ �и� "BC"�� �ǰ�, 3��ŭ �и� "DE"�� �˴ϴ�. "z"�� 1��ŭ �и� "a"�� �˴ϴ�.���ڿ� s�� �Ÿ� n�� �Է¹޾� s�� n��ŭ �� ��ȣ���� ����� �Լ�, solution�� �ϼ��� ������.
//
//���� ����
//������ �ƹ��� �о �����Դϴ�.
//s�� ���ĺ� �ҹ���, �빮��, �������θ� �̷���� �ֽ��ϴ�.
//s�� ���̴� 8000�����Դϴ�.
//n�� 1 �̻�, 25������ �ڿ����Դϴ�.
//����� ��
//s	n	result
//"AB"	1	"BC"
//"z"	1	"a"
//"a B z"	4	"e F d"