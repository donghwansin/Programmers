#include <string>
#include <vector>
#include <iostream>

using namespace std;

//vector<int> solution(int n, long long left, long long right) {
//    vector<int> answer;
//    vector<int> temp;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (i <= j) {
//                temp.push_back(j + 1);
//            } else {
//                temp.push_back(i + 1);
//            }
//        }
//    }
//
//    for (int i = left; i < right + 1; i++) {
//        answer.push_back(temp[i]);
//    }
//
//    return answer;
//}

//vector<int> solution(int n, long long left, long long right) {
//    vector<int> answer;
//    long long count = 0;
//
//    for (long long i = 0; i < n; i++) {
//        for (long long j = 0; j < n; j++) {
//            if (count >= right + 1) {
//                return answer;
//            } else if (left <= count) {
//                if (i <= j) {
//                    answer.push_back(j + 1);
//                } else {
//                    answer.push_back(i + 1);
//                }
//            }
//            count++;
//        }
//    }
//
//    return answer;
//}

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    int topvalue = 0;
    int bottomvalue = 0;


    for (long long i = left; i < right + 1; i++) {
        topvalue = i / n;
        bottomvalue = i % n;

        if (topvalue >= bottomvalue + 1) {
            bottomvalue += topvalue - bottomvalue;
        }

        answer.push_back(bottomvalue + 1);
    }

    return answer;
}


int main()
{
    vector<int> a;

    a = solution(4, 7, 14);

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "";
    }
    cout << endl;

    return 0;
}