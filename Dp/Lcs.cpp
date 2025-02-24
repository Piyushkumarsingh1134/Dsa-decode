#include<iostream>

using namespace std;
int lcs(int ind1, int ind2, string &s1, string&s2,vector<vector<string>>&dp){
    if(ind1 <0 || ind2 < 0){
        return 0;
    }
    if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
    if(s1[ind1]==s2[ind2]){
        return dp[ind1][ind2]=1 + lcs(ind1-1, ind2-1,s1,s2,dp);
    }
    else{
        return dp[ind1][ind2]=(lcs(ind1-1, ind2,s1,s2,dp), lcs(ind1, ind2-1,s1,s2,dp));
    }

}
int lcs1(string &s1, string &s2) {
    int n = s1.length();
    int m = s2.length();

    // Create a (n+1) x (m+1) DP table initialized to 0
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

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

    // Optional: Print the DP table (for debugging/understanding)
    cout << "DP Table:\n";
    for (const auto &row : dp) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return dp[n][m]; // The final LCS length
}
int main(){
    string s1="abcd";
    string s2="bcde";
    int n=s1.length();
    int m=s2.length();
   
     vector<vector<int>>dp(n, vector<int>(m,-1));
     int ans=lcs1(s1.length()-1,s2.length()-1,s1,s2,dp);
     cout<<ans;
     i=n; j=m;
     string res="";
     while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            res +=s1[i-1];
        }else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
        }else{
            j--;
        }
    }
    cout<<res;

}