#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer{ 1, n*m };
    vector<int> ans;
    int max = (n > m ? n : m);

    for (int i = 2; i <= max; i++)
    {
        if ((n % i == 0) && (m % i == 0)) {
            n /= i; m /= i;
            ans.push_back(i);
            i = 1;
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        answer[0] *= ans[i];
    }
    answer[1] = answer[0] * n * m;

    return answer;
}

int main()
{
    vector<int> answer;

    answer = solution(3, 12);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << endl;
    }
    
    return 0;
}

//최대공약수와 최소공배수
//문제 설명
//두 수를 입력받아 두 수의 최대공약수와 최소공배수를 반환하는 함수, solution을 완성해 보세요.배열의 맨 앞에 최대공약수, 그다음 최소공배수를 넣어 반환하면 됩니다.예를 들어 두 수 3, 12의 최대공약수는 3, 최소공배수는 12이므로 solution(3, 12)는[3, 12]를 반환해야 합니다.
//
//제한 사항
//두 수는 1이상 1000000이하의 자연수입니다.
//입출력 예
//n	m	return
//3	12[3, 12]
//2	5[1, 10]
//입출력 예 설명
//입출력 예 #1
//위의 설명과 같습니다.
//
//입출력 예 #2
//자연수 2와 5의 최대공약수는 1, 최소공배수는 10이므로[1, 10]을 리턴해야 합니다.