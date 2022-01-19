#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

//sort compare ���� �н� �ʿ�
int m;
bool cmp(string a, string b) {
    if (a[m] != b[m]) return a[m] < b[m];
    else return a < b;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    m = n;

    sort(strings.begin(), strings.end(), cmp);

    return answer = strings;
}

int main()
{
    vector<string> answer;
    vector<string> a{ "sun", "bed", "car" };
    answer = solution(a, 1);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] <<" ";
    }
    cout << endl;

    return 0;
}

//���ڿ� �� ������� �����ϱ�
//���� ����
//���ڿ��� ������ ����Ʈ strings��, ���� n�� �־����� ��, �� ���ڿ��� �ε��� n��° ���ڸ� �������� �������� �����Ϸ� �մϴ�.���� ��� strings��["sun", "bed", "car"]�̰� n�� 1�̸� �� �ܾ��� �ε��� 1�� ���� "u", "e", "a"�� strings�� �����մϴ�.
//
//���� ����
//strings�� ���� 1 �̻�, 50������ �迭�Դϴ�.
//strings�� ���Ҵ� �ҹ��� ���ĺ����� �̷���� �ֽ��ϴ�.
//strings�� ���Ҵ� ���� 1 �̻�, 100������ ���ڿ��Դϴ�.
//��� strings�� ������ ���̴� n���� Ů�ϴ�.
//�ε��� 1�� ���ڰ� ���� ���ڿ��� ���� �� ���, ���������� �ռ� ���ڿ��� ���ʿ� ��ġ�մϴ�.
//����� ��
//strings	n	return
//["sun", "bed", "car"]	1["car", "bed", "sun"]
//["abce", "abcd", "cdx"]	2["abcd", "abce", "cdx"]
//����� �� ����
//����� �� 1
//"sun", "bed", "car"�� 1��° �ε��� ���� ���� "u", "e", "a" �Դϴ�.�̸� �������� strings�� �����ϸ�["car", "bed", "sun"] �Դϴ�.
//
//����� �� 2
//"abce"�� "abcd", "cdx"�� 2��° �ε��� ���� "c", "c", "x"�Դϴ�.���� ���� �Ŀ��� "cdx"�� ���� �ڿ� ��ġ�մϴ�. "abce"�� "abcd"�� ���������� �����ϸ� "abcd"�� �켱�ϹǷ�, ����["abcd", "abce", "cdx"] �Դϴ�.