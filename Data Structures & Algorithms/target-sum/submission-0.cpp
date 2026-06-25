class Solution {
public:

    int f(int i,int target,vector<int>& nums,vector<vector<int>>& dp){

        int n=nums.size();

        if(i==n){
            return (target==0);
        }

        if(dp[i][target+1000]!=-1)
            return dp[i][target+1000];

        int add=f(i+1,target-nums[i],nums,dp);

        int sub=f(i+1,target+nums[i],nums,dp);

        return dp[i][target+1000]=add+sub;
    }

    int findTargetSumWays(vector<int>& nums, int target) {

        vector<vector<int>> dp(nums.size(),
                               vector<int>(2001,-1));

        return f(0,target,nums,dp);
    }
};