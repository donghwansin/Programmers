#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;

    return answer = stoi(s);
}

int main()
{
    int answer;

    answer = solution("-1234");

    cout << answer << endl;

    return 0;
}

//���ڿ��� ������ �ٲٱ�
//���� ����
//���ڿ� s�� ���ڷ� ��ȯ�� ����� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���.
//
//���� ����
//s�� ���̴� 1 �̻� 5�����Դϴ�.
//s�� �Ǿտ��� ��ȣ(+, -)�� �� �� �ֽ��ϴ�.
//s�� ��ȣ�� ���ڷθ� �̷�����ֽ��ϴ�.
//s�� "0"���� �������� �ʽ��ϴ�.
//����� ��
//������� str�� "1234"�̸� 1234�� ��ȯ�ϰ�, "-1234"�̸� - 1234�� ��ȯ�ϸ� �˴ϴ�.
//str�� ��ȣ(+, -)�� ���ڷθ� �����Ǿ� �ְ�, �߸��� ���� �ԷµǴ� ���� �����ϴ�.