class Solution {
public:
    int func(vector<int> &nums,int ind,vector<int>& dp){
        if(ind == nums.size()-1)
             
            return nums[nums.size()-1];
            if(ind >= nums.size())
             return 0;
             if(dp[ind]!=-1) return dp[ind];
       int firstWay = nums[ind] + dp[ind + 2];
            int secondWay = nums[ind + 1] + dp[ind + 3];

            dp[ind] = max(firstWay, secondWay);
    }
    int rob(vector<int>& nums) {
         int n = nums.size();

        vector<int> dp(n + 3, 0);

        dp[n - 1] = nums[n - 1];

         for (int ind = n - 2; ind >= 0; ind--) {

            int firstWay = nums[ind] + dp[ind + 2];
            int secondWay = nums[ind + 1] + dp[ind + 3];

            dp[ind] = max(firstWay, secondWay);
        }

        return dp[0];
    }
};
