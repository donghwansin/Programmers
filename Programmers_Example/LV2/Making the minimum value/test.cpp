#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    for (int i = 0; i < A.size(); i++) {
        answer += A[i] * B[i];
    }

    return answer;
}

int main()
{
    vector<int> a = { 1,4,2 };
    vector<int> b = { 5,4,4 };

    cout << solution(a, b) << endl;

    return 0;
}