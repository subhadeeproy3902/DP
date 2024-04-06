#include <bits/stdc++.h>
using namespace std;

// Main Code
class Solution
{
public:
  long long countDistinctWayToClimbStairs(long long stairs)
  {
    if (stairs == 0)
      return 0;
    if (stairs == 1)
      return 1;
    if (stairs == 2)
      return 2;
    long long dp[stairs + 1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for (long long i = 3; i <= stairs; i++)
    {
      dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[stairs];
  }
};
// Main Code Ends

int main()
{
  long long n;
  cin >> n;
  Solution *obj = new Solution();
  cout << obj->countDistinctWayToClimbStairs(n) << endl;
  return 0;
}