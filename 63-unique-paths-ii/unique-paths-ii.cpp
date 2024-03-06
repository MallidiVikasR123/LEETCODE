class Solution {
public:
    int fun(int m,int n,vector<vector<int>>& obstacleGrid,vector<vector<int>>&vdp)
    {
        if(m==1 and n==1)
        {
            if(obstacleGrid[m-1][n-1]==1) return 0;
            return 1;
        }
        if(m<1 or n<1)
        {
            return 0;
        }
        if(obstacleGrid[m-1][n-1]==1) return 0;
        if(vdp[m][n]!=-1) return vdp[m][n];
        return vdp[m][n]=fun(m-1,n,obstacleGrid,vdp)+fun(m,n-1,obstacleGrid,vdp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>vdp(obstacleGrid.size()+1,vector<int>(obstacleGrid[0].size()+1,-1));
        return fun(obstacleGrid.size(),obstacleGrid[0].size(),obstacleGrid,vdp);
    }
};