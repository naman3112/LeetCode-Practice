class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
      int row = grid.size(),col=grid[0].size();
        vector<int> mx_row(row,0); vector<int> mx_col(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                   mx_row[i]=max(mx_row[i], grid[i][j]);
                   mx_col[j]=max(mx_col[j],grid[i][j]);
            }
        }
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans=ans+ min(mx_row[i],mx_col[j]) - grid[i][j];
            }
        }
        
        return ans;
        
    }
};
