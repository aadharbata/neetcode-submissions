class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int cnt=0;
        for(int i=0;i<n;i++){

    int j=i;
    int t=gas[i];
    int cnt=0;

    while(1){

        if(cnt==n) return i;

        if(cost[j] > t) break;

        t = t - cost[j] + gas[(j+1)%n];

        cnt++;

        j = (j+1)%n;
    }
}
        return -1;
        
    }
};
