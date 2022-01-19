#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max = 45;

    for (int i = 0; i < numbers.size(); i++) {
        answer += numbers[i];
    }

    return max - answer;
}

int main()
{
    vector<int> a = { 1,2,3,4,6,7,8,0 };

    cout << solution(a) << endl;

    return 0;
}