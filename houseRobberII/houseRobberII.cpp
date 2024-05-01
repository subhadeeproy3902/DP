#include <bits/stdc++.h>
using namespace std;

// Main Code

class Solution
{
public:
  long long int houseRobber(vector<int> &valueInHouse)
  {
  }
};

// Main Code Ends

int main()
{
  int n;
  cin >> n;
  Solution *obj = new Solution();
  int inputs;
  vector<int> valueInHouse(inputs);
  for (int i = 0; i < inputs; i++)
  {
    cin >> valueInHouse[i];
  }
  cout << obj->houseRobber(valueInHouse) << endl;
  return 0;
}