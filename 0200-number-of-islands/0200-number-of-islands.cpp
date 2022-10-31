class Solution {
public:
    void bfs(vector<vector<char>> &grid,vector<vector<int>> &vis, int i, int j,vector<int> & r,vector<int> &c){
        vis[i][j] = 1;
        queue<pair<int,int>> q;
        q.push({i,j});
        int n = grid.size();
        int m = grid[0].size();
      
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
          
            for(int i=0;i<4;i++){
                    int nrow=row+r[i],ncol=col+c[i];
                    if(nrow >=0 && nrow <n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && !vis[nrow][ncol]){
                        vis[nrow][ncol] = 1;
                        q.push({nrow,ncol});
                    }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int cn = 0;
        vector<int> r,c;
        r={-1,1,0,0};
        c={0,0,-1,1}; 
        vector<vector<int>> vis(row,vector<int>(col,0));
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    cn++;
                    bfs(grid, vis, i, j, r, c);
                }
            }
        }
               
        return cn;
    }
};