class Solution {
private:
    int solve(vector<int>& nums, int start, int end, vector<int>& dp) {
        if (start > end) {
            return 0;
        }
        if (start == end) {
            return nums[start];
        }
        if (dp[start] != -1) {
            return dp[start];
        }
        int incl = solve(nums, start + 2, end, dp) + nums[start];
        int excl = solve(nums, start + 1, end, dp);
        dp[start] = max(incl, excl);
        return dp[start];
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        vector<int> dp(n, -1);
        int robFirstHouse = solve(nums, 0, n - 2, dp);
        vector<int> ok(n, -1);
        int robLastHouse = solve(nums, 1, n - 1, ok);
        return max(robFirstHouse, robLastHouse);
    }
};