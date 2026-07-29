class Solution {
public:
    int func(vector<int> &nums,int ind,vector<int>& dp){
        if(ind == nums.size()-1)
            return nums[nums.size()-1];
            if(ind >= nums.size())
             return 0;
             if(dp[ind]!=-1) return dp[ind];
        int firstWay = nums[ind]+func(nums,ind+2,dp);
        int secondWay = nums[ind+1]+func(nums,ind+3,dp);
        return dp[ind] = max(firstWay , secondWay);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return func(nums,0,dp);
    }
};
