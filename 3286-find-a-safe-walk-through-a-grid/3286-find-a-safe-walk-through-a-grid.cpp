class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,-1));
        int start=health-grid[0][0];
        if(start<1) return false;
        queue<tuple<int,int,int>> qu;
        visited[0][0]=start;
        qu.push({0,0,start});
        while(!qu.empty())
        {
            auto [row,col,med]=qu.front();
            qu.pop();
            if(row==n-1 && col==m-1) return true;
            int nrow[]={-1,1,0,0};
            int ncol[]={0,0,-1,1};
            for(int i=0;i<4;i++)
            {
                int nr=row+nrow[i];
                int nc=col+ncol[i];
                if(nr<0 || nr>=n || nc<0 || nc>=m) continue;
                int nh=med-grid[nr][nc];
                if(nh>=1 && nh>visited[nr][nc])
                {
                    visited[nr][nc]=nh;
                    qu.push({nr,nc,nh});
                }
            }
        }
        return false;
    }
};