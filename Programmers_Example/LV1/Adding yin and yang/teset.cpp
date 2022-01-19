#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for (int i = 0; i < absolutes.size(); i++) {
        if (signs[i]) {
            answer += absolutes[i];
        } else {
            answer -= absolutes[i];
        }
    }
    
    return answer;
}

int main()
{
    vector<int> a = { 4,7,12 };
    vector<bool> b = { true, false, true };
    cout<<solution(a, b)<<endl;

    return 0;
}