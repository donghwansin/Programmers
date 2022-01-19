#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % divisor == 0) {
            answer.push_back(arr[i]);
        }
    }

    if (!answer.empty())
        sort(answer.begin(), answer.end());
    else
        answer.push_back(-1);

    return answer;
}

int main()
{
    vector<int> answer;

    answer = solution({ 5,9,7,10 },11);

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}

//������ �������� ���� �迭
//���� ����
//array�� �� element �� divisor�� ������ �������� ���� ������������ ������ �迭�� ��ȯ�ϴ� �Լ�, solution�� �ۼ����ּ���.
//divisor�� ������ �������� element�� �ϳ��� ���ٸ� �迭�� - 1�� ��� ��ȯ�ϼ���.
//
//���ѻ���
//arr�� �ڿ����� ���� �迭�Դϴ�.
//���� i, j�� ���� i �� j �̸� arr[i] �� arr[j] �Դϴ�.
//divisor�� �ڿ����Դϴ�.
//array�� ���� 1 �̻��� �迭�Դϴ�.
//����� ��
//arr	divisor	return
//[5, 9, 7, 10]	5[5, 10]
//[2, 36, 1, 3]	1[1, 2, 3, 36]
//[3, 2, 6]	10[-1]
//����� �� ����
//����� ��#1
//arr�� ���� �� 5�� ������ �������� ���Ҵ� 5�� 10�Դϴ�.����[5, 10]�� �����մϴ�.
//
//����� ��#2
//arr�� ��� ���Ҵ� 1���� ������ �������ϴ�.���Ҹ� ������������ ������[1, 2, 3, 36]�� �����մϴ�.
//
//����� ��#3
//3, 2, 6�� 10���� ������ �������� �ʽ��ϴ�.������ �������� ���Ұ� �����Ƿ�[-1]�� �����մϴ�.