class Solution {
public:

    // int func(int ind){

    //     if(ind == 0)
    //         return 1;

    //     if(ind < 0)
    //         return 0;

    //     return func(ind-1) + func(ind-2);
    // }

    int climbStairs(int n) {
        vector<int> dp(n+1);
       dp[0] = 1;
       dp[1] = 1;
        for(int i=2 ; i<=n;i++){
            dp[i]=dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};