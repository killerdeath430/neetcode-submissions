class Solution {
public:
int maxi=0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),count=0;
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    count=0;
                    dfs(grid,i,j,count);
                    maxi=max(maxi,count);
                }
            }
        }
        return maxi;
    }
    void dfs(vector<vector<int>>& grid,int r,int c,int &count){
        if(r<0||c<0||r>=grid.size()||c>=grid[0].size()||grid[r][c]==0)return;

        grid[r][c]=0;
        count++;
        dfs(grid,r+1,c,count);
        dfs(grid,r,c+1,count);
        dfs(grid,r-1,c,count);
        dfs(grid,r,c-1,count);
    }
};
