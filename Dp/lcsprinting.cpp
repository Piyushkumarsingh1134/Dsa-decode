#include <iostream>
#include <vector>
#include <algorithm> // For reverse()

using namespace std;

int lcs1(string &s1, string &s2, vector<vector<int>> &dp) {
    int n = s1.length();
    int m = s2.length();

    // Create a (n+1) x (m+1) DP table initialized to 0
    dp = vector<vector<int>>(n + 1, vector<int>(m + 1, 0));

    // Bottom-up tabulation
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                // Characters match
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                // Characters don't match
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[n][m]; // The final LCS length
}

int main() {
    string s1 = "abcd";
    string s2 = "bcde";
    int n = s1.length();
    int m = s2.length();

    vector<vector<int>> dp;
    int ans = lcs1(s1, s2, dp);
    cout << "Length of LCS: " << ans << endl;

    // Backtracking to find the actual LCS string
    int i = n, j = m;
    string res = "";

    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            res += s1[i - 1];
            i--;
            j--;
        } else {
            if (dp[i - 1][j] > dp[i][j - 1]) {
                i--;
            } else {
                j--;
            }
        }
    }

    // The string is built backwards
    reverse(res.begin(), res.end());

    cout << "LCS: " << res << endl;

    return 0;
}
