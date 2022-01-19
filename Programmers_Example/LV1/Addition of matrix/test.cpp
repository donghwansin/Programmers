#include <string>
#include <vector>
#include<iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> temp;

    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr1[i].size(); j++) {
            temp.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(temp);
        temp.clear();
    }
    return answer;
}

int main()
{
    vector<vector<int>> answer;
    vector<vector<int>> arr1{ {1,2}, {2,3} };
    vector<vector<int>> arr2{ {3,4}, {5,6} };

    answer = solution(arr1, arr2);

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j];
        }
        cout << endl;
    }

    return 0;
}





//����� ����
//���� ����
//����� ������ ��� ���� ũ�Ⱑ ���� �� ����� ���� ��, ���� ���� ���� ���� ���� ����� �˴ϴ�. 2���� ��� arr1�� arr2�� �Է¹޾�, ��� ������ ����� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.
//
//���� ����
//��� arr1, arr2�� ��� ���� ���̴� 500�� ���� �ʽ��ϴ�.
//����� ��
//arr1	arr2	return
//[[1, 2], [2, 3]] [[3, 4], [5, 6]] [[4, 6], [7, 9]]
//[[1], [2]] [[3], [4]] [[4], [6]]