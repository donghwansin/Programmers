#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int temp;

    if (arr.size() == 1) {
        answer.clear();
        answer.push_back(-1);
    }
    else {
        //sort(arr.begin(), arr.end(), greater<int>()); // �������� ����
        sort(arr.begin(), arr.end());

        temp = arr.front();

        for (int i = 0; answer.size(); i++) {
            if (temp == answer[i])
            {
                answer.erase(answer.begin() + i);
                break;
            }
        }
    }

    return answer;
}

int main()
{
    vector<int> answer;
    vector<int> arr{ 1,5,7,2,9,10 };

    answer = solution(arr);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
    }
    cout << endl;
    return 0;
}


//���� ���� �� �����ϱ�
//���� ����
//������ ������ �迭, arr ���� ���� ���� ���� ������ �迭�� �����ϴ� �Լ�, solution�� �ϼ����ּ���.��, �����Ϸ��� �迭�� �� �迭�� ��쿣 �迭�� - 1�� ä�� �����ϼ���.������� arr��[4, 3, 2, 1]�� ����[4, 3, 2]�� ���� �ϰ�, [10]��[-1]�� ���� �մϴ�.
//
//���� ����
//arr�� ���� 1 �̻��� �迭�Դϴ�.
//�ε��� i, j�� ���� i �� j�̸� arr[i] �� arr[j] �Դϴ�.
//����� ��
//arr	return
//[4, 3, 2, 1][4, 3, 2]
//[10][-1]