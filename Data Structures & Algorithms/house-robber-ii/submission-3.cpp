
class Solution {

public:
int f(int i,int n,vector<int>& nums,vector<int>& dp){
   
    if(i>n-1) return 0;
    if(i==n-1) return nums[i];
    if(dp[i]!=-1) return dp[i];
    int take=INT_MIN,nontake=INT_MIN;

       
    
        
         take=nums[i]+f(i+2,n,nums,dp);
        
      
        
         nontake=f(i+1,n,nums,dp);
        

    
    return dp[i]=max(take,nontake);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        vector<int>dp2(n+1,-1);
        if (n==1) return nums[0];
        int m= f(0,n-1,nums,dp);
          int k= f(1,n,nums,dp2);
          return max(m,k);
        
        
    }
};
