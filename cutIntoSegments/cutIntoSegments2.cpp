#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
private:
  int solve(int n, int x, int y, int z)
  {
    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
      int a = i - x >= 0 ? dp[i - x] : INT_MIN;
      int b = i - y >= 0 ? dp[i - y] : INT_MIN;
      int c = i - z >= 0 ? dp[i - z] : INT_MIN;

      dp[i] = max(a, max(b, c)) + 1;
    }

    return dp[n];
  }

public:
  int cutSegments(int n, int x, int y, int z)
  {
    return solve(n, x, y, z) < 0 ? 0 : solve(n, x, y, z);
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