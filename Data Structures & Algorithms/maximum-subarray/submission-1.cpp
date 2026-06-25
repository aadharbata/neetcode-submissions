class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> prefix(n);

        prefix[0] = nums[0];

        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + nums[i];
        }

        int ans = prefix[0];
        int mini = min(0, prefix[0]);

        for(int i=1;i<n;i++){

            ans = max(ans, prefix[i] - mini);

            mini = min(mini, prefix[i]);
        }

        return ans;
    }
};