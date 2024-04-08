#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
private:
  int solve(int ind, vector<int> &heights, vector<int> &dp)
  {
    if (ind == 0)
      return 0;
    if (dp[ind] != -1) return dp[ind];
    int left = solve(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
      right = solve(ind - 2, heights, dp) + abs(heights[ind] - heights[ind - 2]);
    return dp[ind] = min(left, right);
  }

public:
  int frogJump(int n, vector<int> &heights)
  {
    vector<int> dp(n + 1, -1);
    return solve(n - 1, heights, dp);
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