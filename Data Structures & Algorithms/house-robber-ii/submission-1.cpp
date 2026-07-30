class Solution {
public:

    int func(vector<int>& nums, int ind, int end, vector<int>& dp) {

        if (ind > end)
            return 0;

        if (dp[ind] != -1)
            return dp[ind];

        int firstWay = nums[ind] + func(nums, ind + 2, end, dp);
        int secondWay = func(nums, ind + 1, end, dp);

        return dp[ind] = max(firstWay, secondWay);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        if (n == 1)
            return nums[0];

          vector<int> dp1(n + 2, 0);
        vector<int> dp2(n + 2, 0);

        // Case 1 : Houses 0 to n-2
        for (int ind = n - 2; ind >= 0; ind--) {

            int pick = nums[ind] + dp1[ind + 2];
            int notPick = dp1[ind + 1];

            dp1[ind] = max(pick, notPick);
        }
        for (int ind = n - 1; ind >= 1; ind--) {

            int pick = nums[ind] + dp2[ind + 2];
            int notPick = dp2[ind + 1];

            dp2[ind] = max(pick, notPick);
        }
         return max(dp1[0], dp2[1]);
    }
};