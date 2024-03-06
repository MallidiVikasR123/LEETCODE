class Solution {
public:
    int fun(int m,int n,vector<vector<int>>&vdp)
    {
        if(m==1 and n==1)
        {
            return 1;
        }
        if(m<1 or n<1)
        {
            return 0;
        }
        if(vdp[m][n]!=-1) return vdp[m][n];
        return vdp[m][n]=fun(m-1,n,vdp)+fun(m,n-1,vdp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>vdp(m+1,vector<int>(n+1,-1));
        return fun(m,n,vdp);
    }
};