#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
private:
  int f(int day, int last, vector<vector<int>> &points)
  {
    vector<vector<int>> dp(day + 1, vector<int>(4, -1));
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][0], points[0][1]);
    dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));

    for (int task = 1; task < day + 1; task++)
    {
      for (int lastTask = 0; lastTask < 4; lastTask++)
      {
        dp[task][lastTask] = 0;
        int maxi = 0;
        for (int i = 0; i < 3; i++)
        {
          if (i != lastTask)
          {
            int point = points[task][i] + dp[task - 1][i];
            maxi = max(maxi, point);
          }
        }
        dp[task][lastTask] = maxi;
      }
    }
    return dp[day][3];
  }

public:
  int ninjaTraining(int n, vector<vector<int>> &points)
  {
    return f(n - 1, 3, points);
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