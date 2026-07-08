class Solution {

public:
int f(int i,vector<int>& nums,vector<int>& dp){
    int n=nums.size();
    if(i>n-1) return 0;
    if(i==n-1) return nums[i];
    if(dp[i]!=-1) return dp[i];
    int take=INT_MIN,nontake=INT_MIN;

       
    
        
         take=nums[i]+f(i+2,nums,dp);
        
      
        
         nontake=f(i+1,nums,dp);
        

    
    return dp[i]=max(take,nontake);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(0,nums,dp);
        
    }
};
