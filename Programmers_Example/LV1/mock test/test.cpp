#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> aa{ {1, 2, 3, 4, 5}, 
                            {2, 1, 2, 3, 2, 4, 2, 5}, 
                            {3, 3, 1, 1, 2, 2, 4, 4, 5, 5} };
    int temp[3] = { 0 };

    for (int t = 0; t < aa.size(); t++) {
        for (int i = 0; i < answers.size(); i++) {
            if (answers[i] == aa[t][i % aa[t].size()]) {
                temp[t]++;
            }
        }
    }

    int max = 0;
    for (int i = 0; i < 3; i++) {
        if (max <= temp[i]) {
            max = temp[i];
        }
    }

    for (int i = 0; i < 3; i++) {
        if (max == temp[i]) {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}

int main()
{
    vector<int> answer;
    vector<int> a{ 5, 5, 5, 1, 4, 1 };

    answer = solution(a);
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}

//���ǰ���
//���� ����
//�����ڴ� ������ ������ ����� �ظ��Դϴ�.������ ���ι��� ���ǰ��翡 ���� ������ ���� ������ �մϴ�.�����ڴ� 1�� �������� ������ �������� ������ ���� ����ϴ�.
//
//1�� �����ڰ� ��� ��� : 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
//2�� �����ڰ� ��� ��� : 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
//3�� �����ڰ� ��� ��� : 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...
//
//1�� �������� ������ ���������� ������ ������� ���� �迭 answers�� �־����� ��, ���� ���� ������ ���� ����� �������� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.
//
//���� ����
//������ �ִ� 10, 000 ������ �����Ǿ��ֽ��ϴ�.
//������ ������ 1, 2, 3, 4, 5�� �ϳ��Դϴ�.
//���� ���� ������ ���� ����� ������ ���, return�ϴ� ���� �������� �������ּ���.
//����� ��
//answers	return
//[1, 2, 3, 4, 5][1]
//[1, 3, 2, 4, 2][1, 2, 3]
//����� �� ����
//����� �� #1
//
//������ 1�� ��� ������ �������ϴ�.
//������ 2�� ��� ������ Ʋ�Ƚ��ϴ�.
//������ 3�� ��� ������ Ʋ�Ƚ��ϴ�.
//���� ���� ������ ���� ���� ����� ������ 1�Դϴ�.
//
//����� �� #2
//
//��� ����� 2�������� ������ϴ�.