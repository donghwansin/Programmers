#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = " ";
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isspace(s[i])) {
            count = 0;
        } else {
            if (count == 0) {
                if ('a' <= s[i] && s[i] <= 'z') {
                    s[i] += 'A' - 'a';
                }
            } else {
                if ('A' <= s[i] && s[i] <= 'Z') {
                    s[i] -= 'A' - 'a';
                }
            }
            count++;
        }
    }

    return s;
}

int main()
{
    cout << solution("ab cd 3a  abc") << endl;
    return 0;
}