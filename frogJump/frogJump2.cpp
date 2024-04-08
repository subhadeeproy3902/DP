#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
public:
  int frogJump(int n, vector<int> &heights)
  {
    vector<int> dp(n, 0);
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
      int ans = dp[i - 1] + abs(heights[i] - heights[i - 1]);
      int s = INT_MAX;
      if (i > 1)
        s = dp[i - 2] + abs(heights[i] - heights[i - 2]);
      dp[i] = min(ans, s);
    }
    return dp[n - 1];
  }
};

// Main Code Ends

int main()
{
  int n;
  cin >> n;
  Solution *obj = new Solution();
  vector<int> heights(n);
  for (int i = 0; i < n; i++)
    cin >> heights[i];
  cout << obj->frogJump(n, heights) << endl;
  return 0;
}