class Solution {
public:
int f(int i,int n,vector<int>& cost,vector<int>& dp){
    if(i>=n) return 0;
    if(dp[i]!=-1) return dp[i];
   
    int t=INT_MAX,k=INT_MAX;
    if(i<n){
        t=cost[i]+f(i+1,n,cost,dp);

    }
      if(i<(n-1)){
        k=cost[i]+f(i+2,n,cost,dp);

    }
    return dp[i]=min(t,k);

}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        int a= f(0,n,cost,dp);
        int b=f(1,n,cost,dp);
        return min(a,b);
        
    }
};
