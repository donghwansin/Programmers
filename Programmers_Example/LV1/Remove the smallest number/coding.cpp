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
        //sort(arr.begin(), arr.end(), greater<int>()); // 내림차순 정렬
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


//제일 작은 수 제거하기
//문제 설명
//정수를 저장한 배열, arr 에서 가장 작은 수를 제거한 배열을 리턴하는 함수, solution을 완성해주세요.단, 리턴하려는 배열이 빈 배열인 경우엔 배열에 - 1을 채워 리턴하세요.예를들어 arr이[4, 3, 2, 1]인 경우는[4, 3, 2]를 리턴 하고, [10]면[-1]을 리턴 합니다.
//
//제한 조건
//arr은 길이 1 이상인 배열입니다.
//인덱스 i, j에 대해 i ≠ j이면 arr[i] ≠ arr[j] 입니다.
//입출력 예
//arr	return
//[4, 3, 2, 1][4, 3, 2]
//[10][-1]