#include <string>
#include <vector>
#include <iostream>

using namespace std;

//////////////////////////////////////////////////////////////////////////
//****************************DFSǮ��
//////////////////////////////////////////////////////////////////////////
/*
////����, ����Ƚ��, ã�ƾ� �ϴ� ����, �� ����, ������� ��
void dfs(vector<int>& numbers, int& answer, int target, int count = 0, int sum = 0) {
//���������� ��ȸ�ߴٸ�
    if(count == numbers.size() - 1) {
    //���ݱ��� ���� ���� ������ ���ڸ� ���Ҷ� Ÿ�ٰ� ���ٸ� ī��Ʈ ����
        if(target == sum + numbers[count]) {
            answer++;
        }
        //���ݱ��� ���� ���� ������ ���ڸ� ���� Ÿ�ٰ� ���ٸ� ī��Ʈ ����
        if(target == sum - numbers[count]) {
            answer++;
        }
        return;
    }
    //�ִ밪���� ���� �ʾҴٸ� ���ϰų� �� ���·� ���(Ž��)
    dfs(numbers, answer, target, count + 1, sum + numbers[count]);
    dfs(numbers, answer, target, count + 1, sum - numbers[count]);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;

    dfs(numbers, answer, target);

    return answer;
}
*/
//////////////////////////////////////////////////////////////////////////
//****************************BFSǮ��
//////////////////////////////////////////////////////////////////////////
#include<queue>

int solution(vector<int> numbers, int target) {
    int answer = 0;
    queue<int> q;
    //numbersù��° ����(+,-)�� ť�� �־� ����
    //+����Ǽ�, -����Ǽ��� �ѹ��� ���ϱ�����
    q.push(numbers[0]);
    q.push(-1 * numbers[0]);
    //numbers��� ���ڸ� ���ؾ��ϹǷ� �ϳ��� ���� ������ ���ڱ��� ��ȸ
    for (int i = 1; i < numbers.size(); i++) {
        int len = q.size();
        for (int j = 0; j < len; j++) {
            int sum = q.front();
            q.pop();
            q.push(sum + numbers[i]);
            q.push(sum - numbers[i]);
        }
    }
    //ť���ִ� ��簪�� Ÿ�ٰ��� ���Ͽ� ��ġ�ϸ� ���� �� ����
    int qsize = q.size();
    for (int i = 0; i < qsize; i++) {
        if (q.front() == target)
            answer++;
        q.pop();
    }
    return answer;
}

/// <summary>
/// MAIN
/// </summary>
/// <returns></returns>
int main()
{
    int answer;
    vector<int> numbers{ 1,1,1,1,1 };

    answer = solution(numbers, 3);
    cout << answer << endl;

    return 0;
}


//Ÿ�� �ѹ�
//���� ����
//n���� ���� �ƴ� ������ �ֽ��ϴ�.�� ���� ������ ���ϰų� ���� Ÿ�� �ѹ��� ������� �մϴ�.���� ���[1, 1, 1, 1, 1]�� ���� 3�� ������� ���� �ټ� ����� �� �� �ֽ��ϴ�.
//
//- 1 + 1 + 1 + 1 + 1 = 3
//+ 1 - 1 + 1 + 1 + 1 = 3
//+ 1 + 1 - 1 + 1 + 1 = 3
//+ 1 + 1 + 1 - 1 + 1 = 3
//+ 1 + 1 + 1 + 1 - 1 = 3
//����� �� �ִ� ���ڰ� ��� �迭 numbers, Ÿ�� �ѹ� target�� �Ű������� �־��� �� ���ڸ� ������ ���ϰ� ���� Ÿ�� �ѹ��� ����� ����� ���� return �ϵ��� solution �Լ��� �ۼ����ּ���.
//
//���ѻ���
//�־����� ������ ������ 2�� �̻� 20�� �����Դϴ�.
//�� ���ڴ� 1 �̻� 50 ������ �ڿ����Դϴ�.
//Ÿ�� �ѹ��� 1 �̻� 1000 ������ �ڿ����Դϴ�.
//����� ��
//numbers	target	return
//[1, 1, 1, 1, 1]	3	5
//����� �� ����
//������ ���� ���� �����ϴ�.