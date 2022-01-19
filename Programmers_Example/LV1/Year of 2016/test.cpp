#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string week[]{ "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
    int month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int total = 0;

    for (int i = 0; i < a - 1; i++)
    {
        total += month[i];
    }
    total += b - 1;

    return answer = week[total % 7];
}

int main()
{
    string answer;

    answer = solution(5, 24);
    cout << answer << endl;

    return 0;
}


//2016��
//���� ����
//2016�� 1�� 1���� �ݿ����Դϴ�. 2016�� a�� b���� ���� �����ϱ�� ? �� �� a, b�� �Է¹޾� 2016�� a�� b���� ���� �������� �����ϴ� �Լ�, solution�� �ϼ��ϼ���.������ �̸��� �Ͽ��Ϻ��� ����ϱ��� ���� SUN, MON, TUE, WED, THU, FRI, SAT
//
//�Դϴ�.���� ��� a = 5, b = 24��� 5�� 24���� ȭ�����̹Ƿ� ���ڿ� "TUE"�� ��ȯ�ϼ���.
//
//���� ����
//2016���� �����Դϴ�.
//2016�� a�� b���� ������ �ִ� ���Դϴ�. (13�� 26���̳� 2�� 45�ϰ��� ��¥�� �־����� �ʽ��ϴ�)
//����� ��
//a	b	result
//5	24	"TUE"