class Solution {
public:
    int rob(vector<int>& nums) {

        int prev = 0;   // dp[ind+1]
        int prev2 = 0;  // dp[ind+2]

        for (int ind = nums.size() - 1; ind >= 0; ind--) {

            int curr = max(nums[ind] + prev2, prev);

            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
};