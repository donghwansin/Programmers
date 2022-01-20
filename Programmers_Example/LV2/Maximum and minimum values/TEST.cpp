#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    istringstream ss(s);
    string stringbuff;
    vector<string> a;
    vector<int> temp;

    while (getline(ss, stringbuff, ' ')) {
        a.push_back(stringbuff);
    }

    for (int i = 0; i < a.size(); i++) {
        temp.push_back(stoi(a[i]));
    }
    sort(temp.begin(), temp.end());

    return answer = to_string(temp.front()) + " " + to_string(temp.back());
}

int main()
{
    cout << solution("11 -21 31 41") << endl;

    return 0;
}