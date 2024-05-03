#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
private:
  int solve(int n, int x, int y, int z, vector<int> &dp)
  {
    if (n == 0)
      return 0;
    if (n < 0)
      return INT_MIN;
    if (dp[n] != -1)
      return dp[n];

    int a = solve(n - x, x, y, z, dp) + 1;
    int b = solve(n - y, x, y, z, dp) + 1;
    int c = solve(n - z, x, y, z, dp) + 1;

    return dp[n] = max(a, max(b, c));
  }

public:
  int cutSegments(int n, int x, int y, int z)
  {
    vector<int> dp(n + 1, -1);
    return solve(n, x, y, z, dp) < 0 ? 0 : solve(n, x, y, z, dp);
  }
};

// Main Code Ends

int main()
{
  int n;
  cin >> n;
  Solution *obj = new Solution();

  int x, y, z;
  cin >> x >> y >> z;

  cout << obj->cutSegments(n, x, y, z) << endl;
  return 0;
}