#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end(), greater<char>());
    return answer = s;
}

int main()
{
    string answer;

    answer = solution("Zbcdefg");
    cout << answer << endl;
    return 0;
}
//���ڿ� ������������ ��ġ�ϱ�
//���� ����
//���ڿ� s�� ��Ÿ���� ���ڸ� ū�ͺ��� ���� ������ ������ ���ο� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
//s�� ���� ��ҹ��ڷθ� �����Ǿ� ������, �빮�ڴ� �ҹ��ں��� ���� ������ �����մϴ�.
//
//���� ����
//str�� ���� 1 �̻��� ���ڿ��Դϴ�.
//����� ��
//s	return
//"Zbcdefg"	"gfedcbZ"