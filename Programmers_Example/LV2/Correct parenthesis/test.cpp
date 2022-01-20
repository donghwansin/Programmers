#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int flag = 0;

    if (s[0] == ')') {
        return false;
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            flag += 1;
        } else {
            flag -= 1;
        }

        if (flag < 0) {
            return false;
        }
    }

    if (flag != 0) {
        return false;
    }

    return true;
}

int main()
{
    cout << solution("(()(") << endl;

    return 0;
}