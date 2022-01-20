#include <string>
#include <vector>
#include <iostream>

using namespace std;

//////////////////////////////////////////////////////////////////////////
//****************************DFS풀이
//////////////////////////////////////////////////////////////////////////
/*
////벡터, 정답횟수, 찾아야 하는 숫자, 들어간 깊이, 현재까지 합
void dfs(vector<int>& numbers, int& answer, int target, int count = 0, int sum = 0) {
//마지막까지 순회했다면
    if(count == numbers.size() - 1) {
    //지금까지 더한 값에 마지막 인자를 더할때 타겟과 같다면 카운트 증가
        if(target == sum + numbers[count]) {
            answer++;
        }
        //지금까지 더한 값에 마지막 인자를 뺄때 타겟과 같다면 카운트 증가
        if(target == sum - numbers[count]) {
            answer++;
        }
        return;
    }
    //최대값까지 가지 않았다면 더하거나 뺀 상태로 재귀(탐색)
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
//****************************BFS풀이
//////////////////////////////////////////////////////////////////////////
#include<queue>

int solution(vector<int> numbers, int target) {
    int answer = 0;
    queue<int> q;
    //numbers첫번째 인자(+,-)를 큐에 넣어 시작
    //+경우의수, -경우의수를 한번에 구하기위해
    q.push(numbers[0]);
    q.push(-1 * numbers[0]);
    //numbers모든 인자를 더해야하므로 하나씩 시작 마지막 인자까지 순회
    for (int i = 1; i < numbers.size(); i++) {
        int len = q.size();
        for (int j = 0; j < len; j++) {
            int sum = q.front();
            q.pop();
            q.push(sum + numbers[i]);
            q.push(sum - numbers[i]);
        }
    }
    //큐에있는 모든값과 타겟값을 비교하여 일치하면 리턴 값 증가
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


//타겟 넘버
//문제 설명
//n개의 음이 아닌 정수가 있습니다.이 수를 적절히 더하거나 빼서 타겟 넘버를 만들려고 합니다.예를 들어[1, 1, 1, 1, 1]로 숫자 3을 만들려면 다음 다섯 방법을 쓸 수 있습니다.
//
//- 1 + 1 + 1 + 1 + 1 = 3
//+ 1 - 1 + 1 + 1 + 1 = 3
//+ 1 + 1 - 1 + 1 + 1 = 3
//+ 1 + 1 + 1 - 1 + 1 = 3
//+ 1 + 1 + 1 + 1 - 1 = 3
//사용할 수 있는 숫자가 담긴 배열 numbers, 타겟 넘버 target이 매개변수로 주어질 때 숫자를 적절히 더하고 빼서 타겟 넘버를 만드는 방법의 수를 return 하도록 solution 함수를 작성해주세요.
//
//제한사항
//주어지는 숫자의 개수는 2개 이상 20개 이하입니다.
//각 숫자는 1 이상 50 이하인 자연수입니다.
//타겟 넘버는 1 이상 1000 이하인 자연수입니다.
//입출력 예
//numbers	target	return
//[1, 1, 1, 1, 1]	3	5
//입출력 예 설명
//문제에 나온 예와 같습니다.