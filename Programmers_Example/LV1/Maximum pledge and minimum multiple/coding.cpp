#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer{ 1, n*m };
    vector<int> ans;
    int max = (n > m ? n : m);

    for (int i = 2; i <= max; i++)
    {
        if ((n % i == 0) && (m % i == 0)) {
            n /= i; m /= i;
            ans.push_back(i);
            i = 1;
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        answer[0] *= ans[i];
    }
    answer[1] = answer[0] * n * m;

    return answer;
}

int main()
{
    vector<int> answer;

    answer = solution(3, 12);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }
    
    return 0;
}

//�ִ������� �ּҰ����
//���� ����
//�� ���� �Է¹޾� �� ���� �ִ������� �ּҰ������ ��ȯ�ϴ� �Լ�, solution�� �ϼ��� ������.�迭�� �� �տ� �ִ�����, �״��� �ּҰ������ �־� ��ȯ�ϸ� �˴ϴ�.���� ��� �� �� 3, 12�� �ִ������� 3, �ּҰ������ 12�̹Ƿ� solution(3, 12)��[3, 12]�� ��ȯ�ؾ� �մϴ�.
//
//���� ����
//�� ���� 1�̻� 1000000������ �ڿ����Դϴ�.
//����� ��
//n	m	return
//3	12[3, 12]
//2	5[1, 10]
//����� �� ����
//����� �� #1
//���� ����� �����ϴ�.
//
//����� �� #2
//�ڿ��� 2�� 5�� �ִ������� 1, �ּҰ������ 10�̹Ƿ�[1, 10]�� �����ؾ� �մϴ�.