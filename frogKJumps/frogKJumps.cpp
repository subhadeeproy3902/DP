#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
private:
public:
  int frogKJumps(int n, vector<int> &heights, int k)
  {
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
      for (int j = 1; j <= k; j++)
      {
        if (i - j >= 0)
        {
          dp[i] = min(dp[i], dp[i - j] + abs(heights[i] - heights[i - j]));
        }
      }
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
  int k;
  cin >> k;
  cout << obj->frogKJumps(n, heights, k) << endl;
  return 0;
}