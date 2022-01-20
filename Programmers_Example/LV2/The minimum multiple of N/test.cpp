#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int count = 0;
    
    for (int i = arr.back(); ; i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (i % arr[j] == 0) {
                count++;
            } else {
                count = 0;
                break;
            }

            if (count == arr.size()) {
                return i;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> a = { 1,2,3 };

    cout << solution(a) << endl;

    return 0;
}