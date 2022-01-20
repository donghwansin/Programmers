#include <string>
#include <vector>
#include <iostream>

using namespace std;

string getbinarystring(int n) {
    string answer;

    while (n > 0) {
        int tempbinary = n % 2;
        n /= 2;
        answer = to_string(tempbinary) + answer;
    }
    return answer;
}

int getcountone(string binary) {
    int answer = 0;

    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '1') {
            answer++;
        }
    }

    return answer;
}

int solution(int n) {
    int answer = 0;
    string binary_change = getbinarystring(n);
    int count = getcountone(binary_change);

    for (int i = n + 1; ; i++) {
        binary_change = getbinarystring(i);
        if (count == getcountone(binary_change)) {
            answer = i;
            break;
        }
    }

    return answer;
}

int main()
{

    cout << solution(78) << endl;

    return 0;
}