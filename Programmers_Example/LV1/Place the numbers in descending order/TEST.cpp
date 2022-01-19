#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> temp;
    int i;

    for (i = 0; n > 10; i++) {
        temp.push_back(n % 10);
        n /= 10;
    }
    temp.push_back(n);

    sort(temp.begin(), temp.end(), greater<int>());

    for (int j = 0; j <= i; j++)
    {
        answer += temp.back() * pow(10, j);
        temp.pop_back();
    }

    return answer;
}

int main()
{
    long long answer = 118372;

    answer = solution(answer);
    cout << answer << endl;

    return 0;
}

//정수 내림차순으로 배치하기
//문제 설명
//함수 solution은 정수 n을 매개변수로 입력받습니다.n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 리턴해주세요.예를들어 n이 118372면 873211을 리턴하면 됩니다.
//
//제한 조건
//n은 1이상 8000000000 이하인 자연수입니다.
//입출력 예
//n	return
//118372	873211