#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
private:
  int solve(vector<int> &num, int x)
  {
    vector<int> dp(x + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
      for (int j = 0; j < num.size(); j++)
      {
        if (i - num[j] >= 0 && dp[i - num[j]] != INT_MAX)
        {
          dp[i] = min(dp[i], dp[i - num[j]] + 1);
        }
      }
    }

    if (dp[x] == INT_MAX)
    {
      return -1;
    }
    return dp[x];
  }

public:
  int minimumElementsWithTabulation(vector<int> &num, int x)
  {
    return solve(num, x);
  }
};

// Main Code Ends

int main()
{
  int n;
  cin >> n;
  Solution *obj = new Solution();
  vector<int> num(n);
  for (int i = 0; i < n; i++)
  {
    cin >> num[i];
  }
  int x;
  cin >> x;
  cout << obj->minimumElementsWithTabulation(num, x) << endl;
  return 0;
}