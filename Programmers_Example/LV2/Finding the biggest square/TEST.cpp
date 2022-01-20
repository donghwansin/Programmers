#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> board)
{
    int answer;
    vector<vector<int>> dp(board.size(), vector<int>(board[0].size(), 0));

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            dp[i][j] = board[i][j];
        }
    }
    answer = board[0][0];

    for (int i = 1; i < board.size(); i++) {
        for (int j = 1; j < board[0].size(); j++) {
            if (board[i][j] == 1) {
                dp[i][j] = min({ dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1] }) + 1;
                if (answer < dp[i][j]) {
                    answer = dp[i][j];
                }
            }
        }
    }
    return answer*answer;
}

int main()
{
    vector<vector<int>> a = { {0,1,1,1}, {1,1,1,1}, {1,1,1,1}, {0,0,1,0} };
    cout << solution(a) << endl;

    return 0;
}