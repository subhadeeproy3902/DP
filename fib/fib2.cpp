#include <bits/stdc++.h>
using namespace std;

// Main Code
class Solution
{
public:
  int fib(int n)
  {
    if (n == 0 || n == 1)
      return n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
      dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
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