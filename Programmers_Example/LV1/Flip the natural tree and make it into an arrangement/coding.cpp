#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int count;
    for (count = 0; n > 10; count++) {
        answer.push_back(n % 10);
        n /= 10;
    }
    answer.push_back(n);

    return answer;
}

int main()
{
    vector<int> answer;

    answer = solution(12345);
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i];
    }
    cout << endl;

    return 0;
}

//�ڿ��� ������ �迭�� �����
//���� ����
//�ڿ��� n�� ������ �� �ڸ� ���ڸ� ���ҷ� ������ �迭 ���·� �������ּ���.������� n�� 12345�̸�[5, 4, 3, 2, 1]�� �����մϴ�.
//
//���� ����
//n�� 10, 000, 000, 000������ �ڿ����Դϴ�.
//����� ��
//n	return
//12345[5, 4, 3, 2, 1]