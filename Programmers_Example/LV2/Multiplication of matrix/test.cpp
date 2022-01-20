#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> vtemp;
    int sum = 0;

    for (int t = 0; t < arr1.size(); t++) {
        for (int i = 0; i < arr2[0].size(); i++) {
            for (int j = 0; j < arr1[t].size(); j++) {
                sum += arr1[t][j] * arr2[j][i];
            }
            vtemp.push_back(sum);
            sum = 0;
        }
        answer.push_back(vtemp);
        vtemp.clear();
    }

    return answer;
}

int main()
{
    vector<vector<int>> a = { {1,2,3}, {4,5,6} };
    vector<vector<int>> b = { {1,4}, {2,5}, {3,6} };
    
    vector<vector<int>> c;

    c = solution(a, b);

    for (int i = 0; i < c.size(); i++ ) {
        for (int j = 0; j < c[i].size(); j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
  
    return 0;
}