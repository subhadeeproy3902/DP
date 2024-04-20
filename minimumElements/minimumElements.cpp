#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
private:
  int solve(vector<int> &num, int x, vector<int> &dp)
  {
    if (x == 0) return 0;
    if (x < 0) return INT_MAX;
    if (dp[x] != INT_MAX) return dp[x];

    int mini = INT_MAX;
    for (int i = 0; i < num.size(); i++)
    {
      int ans = solve(num, x - num[i], dp);
      if (ans != INT_MAX)
      {
        mini = min(mini, ans + 1);
      }
    }
    return dp[x] = mini;
  }

public:
  int minimumElements(vector<int> &num, int x)
  {
    vector<int> dp(x + 1, INT_MAX);
    int ans = solve(num, x, dp);
    return ans == INT_MAX ? -1 : ans;
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
  cout << obj->minimumElements(num, x) << endl;
  return 0;
}