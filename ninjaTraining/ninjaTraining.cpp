#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
private:
  int f (int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp) {
    if (day == 0) {
      int maxi = 0;
      for (int task = 0; task <  3; task++) {
        if (task != last) {
          maxi = max(maxi, points[0][task]);
        }
      }
      return maxi;
    }

    if (dp[day][last] != -1) {
      return dp[day][last];
    }

    int maxi = 0;
    for (int task = 0; task < 3; task++) {
      if (task != last) {
        maxi = max(maxi, points[day][task] + f(day - 1, task, points, dp));
      }
    }
    return dp[day][last] = maxi;
  }
public:
  int ninjaTraining(int n, vector<vector<int>> &points)
  {
    vector<vector<int>> dp(n, vector<int>(4, -1));
    return f(n - 1, 3, points, dp);
  }
};

// Main Code Ends

int main()
{
  Solution *obj = new Solution();
  int inputSize;
  cin >> inputSize;
  vector<vector<int>> points;
  for (int i = 0; i < inputSize; i++)
  {
    vector<int> temp;
    for (int j = 0; j < 2; j++)
    {
      int x;
      cin >> x;
      temp.push_back(x);
    }
    points.push_back(temp);
  }
  cout << obj->ninjaTraining(inputSize, points) << endl;
  return 0;
}