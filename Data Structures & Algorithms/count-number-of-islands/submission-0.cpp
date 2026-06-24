class Solution {
public:
   void dfs(int row,int col,vector<vector<char>>& grid,vector<vector<int>>& vis){
     int n=grid.size();
        int m=grid[0].size();
    int delr[]={-1,0,1,0};
    int delc[]={0,1,0,-1};
    for(int k=0;k<4;k++){
        int nr=row+delr[k];
        int nc=col+delc[k];
        if(nc<m&&nc>=0&&nr>=0&&nr<n&&grid[nr][nc]=='1'&&!vis[nr][nc]){
            vis[nr][nc]=1;
            dfs(nr,nc,grid,vis);
        }
    }
   }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'&&!vis[i][j]){
                    cnt++;
                    vis[i][j]=1;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return cnt;
        
    }
};
