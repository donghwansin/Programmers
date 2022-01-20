#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> temp = { 0, 1, 1 };

    for (int i = 3; i <= n; i++) {
        temp.push_back((temp[i - 1] + temp[i - 2]) % 1234567);
    }  
    answer = temp.back();

    return answer;
}

int main()
{
    cout << solution(5) << endl;
    return 0;
}

//int solution(int n) {
//    int answer = 0;
//
//    if (n == 0) {
//        return 0;
//    } else if (n == 1) {
//        return 1;
//    } else {
//        return (solution(n - 1) + solution(n - 2)) % 1234567;
//    }
//
//    return answer;
//}