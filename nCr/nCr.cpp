//{ Driver Code Starts
// Initial template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
  const int mod = 1e9 + 7;
  long int ncr(int n, int r)
  {
    // complete the function here
    vector<vector<long int>> dp(n + 1, vector<long int>(r + 1, 0));
    for (int i = 0; i <= n; ++i)
      dp[i][0] = 1;
    for (int i = 1; i <= n; ++i)
    {
      for (int j = 1; j <= r; ++j)
      {
        dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
      }
    }
    return dp[n][r] % mod;
  }
};

//{ Driver Code Starts.

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, r;
    cin >> n >> r;
    Solution ob;
    cout << ob.ncr(n, r) << endl;
  }
  return 0;
}

// } Driver Code Ends