#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
private:
  int solve(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
      int incl = dp[i - 2] + nums[i];
      int excl = dp[i - 1];
      dp[i] = max(incl, excl);
    }
    return dp[n - 1];
  }

public:
  int maximumNonAdjacentSumTab(vector<int> &nums)
  {
    return solve(nums);
  }
};

// Main Code Ends

int main()
{
  Solution *obj = new Solution();
  int input;
  scanf("%d", &input);
  vector<int> nums(input);
  for (int i = 0; i < input; i++)
  {
    scanf("%d", &nums[i]);
  }
  cout << obj->maximumNonAdjacentSumTab(nums) << endl;
  return 0;
}