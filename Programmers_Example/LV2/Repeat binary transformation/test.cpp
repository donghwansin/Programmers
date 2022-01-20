#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string temp = "";
    int zerocount = 0, totalcount = 0;

    while (s != "1") {
        totalcount++;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                temp += s[i];
            }
            else {
                zerocount++;
            }
        }

        int templength = temp.length();
        temp.clear();
        s.clear();

        while (templength >= 1) {
            s.insert(0, to_string(templength % 2));;
            templength /= 2;
        }
    }
    
    answer.push_back(totalcount);
    answer.push_back(zerocount);

    return answer;
}

int main()
{
    vector<int> a;
    a = solution("110010101001");

    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
    }
    cout << endl;

    return 0;
}