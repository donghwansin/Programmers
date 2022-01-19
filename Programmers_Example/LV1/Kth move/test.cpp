#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;

    for (int i = 0; i < commands.size(); i++) {
        for (int j = commands[i][0]; j <= commands[i][1]; j++) {
            temp.push_back(array[j - 1]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2] - 1]);
        temp.clear();
    }

    return answer;
}

int main()
{
    vector<int> answer;
    vector<int> a{ 1, 5, 2, 6, 3, 7, 4 };
    vector<vector<int>> b{ {2,5,3}, {4,4,1}, {1,7,3} };

    answer = solution(a, b);
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}

//K��°��
//���� ����
//�迭 array�� i��° ���ں��� j��° ���ڱ��� �ڸ��� �������� ��, k��°�� �ִ� ���� ���Ϸ� �մϴ�.
//
//���� ��� array��[1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3�̶��
//
//array�� 2��°���� 5��°���� �ڸ���[5, 2, 6, 3]�Դϴ�.
//1���� ���� �迭�� �����ϸ�[2, 3, 5, 6]�Դϴ�.
//2���� ���� �迭�� 3��° ���ڴ� 5�Դϴ�.
//�迭 array, [i, j, k]�� ���ҷ� ���� 2���� �迭 commands�� �Ű������� �־��� ��, commands�� ��� ���ҿ� ���� �ռ� ������ ������ �������� �� ���� ����� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.
//
//���ѻ���
//array�� ���̴� 1 �̻� 100 �����Դϴ�.
//array�� �� ���Ҵ� 1 �̻� 100 �����Դϴ�.
//commands�� ���̴� 1 �̻� 50 �����Դϴ�.
//commands�� �� ���Ҵ� ���̰� 3�Դϴ�.
//����� ��
//array	commands	return
//[1, 5, 2, 6, 3, 7, 4] [[2, 5, 3], [4, 4, 1], [1, 7, 3]] [5, 6, 3]
//����� �� ����
//[1, 5, 2, 6, 3, 7, 4]�� 2��°���� 5��°���� �ڸ� �� �����մϴ�.[2, 3, 5, 6]�� �� ��° ���ڴ� 5�Դϴ�.
//[1, 5, 2, 6, 3, 7, 4]�� 4��°���� 4��°���� �ڸ� �� �����մϴ�.[6]�� ù ��° ���ڴ� 6�Դϴ�.
//[1, 5, 2, 6, 3, 7, 4]�� 1��°���� 7��°���� �ڸ��ϴ�.[1, 2, 3, 4, 5, 6, 7]�� �� ��° ���ڴ� 3�Դϴ�.