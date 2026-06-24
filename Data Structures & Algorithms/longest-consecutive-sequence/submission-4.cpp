class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=0;
        int maxi=0;
        for(int i=0;i<n-1;i++){
            if(abs(nums[i+1]-nums[i])==1){

                cnt++;
                maxi=max(maxi,cnt);
                // maxi=max(maxi,cnt);

            }
            else if(nums[i+1]==nums[i])continue;
           else{
            cnt=0;
           }
            // else{
            //     cnt=0;
            // }
        }
        if(n>=2){
            return maxi+1;

        }
        else if(n==1) return 1;
        else return 0;
        
    }
};
