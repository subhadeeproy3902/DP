#include <bits/stdc++.h>
using namespace std;


// Main Code
class Solution
{
private:
  int solve(int n, vector<int> &dp)
  {
    if (n <= 1)
      return n;
    if (dp[n] != -1)
      return dp[n];
    dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    return dp[n];
  }

public:
  int fib(int n)
  {
    if (n == 0 || n == 1)
      return n;
    vector<int> dp(n + 1, -1);
    return solve(n, dp);
  }
};
// Main Code Ends


int main()
{
  int n;
  cin >> n;
  Solution *obj = new Solution();
  cout << obj->fib(n) << endl;
  return 0;
}
