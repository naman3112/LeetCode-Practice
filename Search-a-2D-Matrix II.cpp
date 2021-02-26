class Solution {
public:
    bool row_search(vector<vector<int>>&matrix , int target , int start , int end, int row,int m,int n){
          
    
        if(start>end || row>m||end>n){
           
            return false;
            }
        int mid=start+(end-start)/2;
        
            if(matrix[row][mid]==target){
                return true;
            }
            if(matrix[row][mid]<target){
              return row_search(matrix, target, mid+1,end,row,m,n);
            }
          else{
                return row_search(matrix,target,start,mid-1,row,m,n);
            }
        
    }
    
      bool col_search(vector<vector<int>>&matrix , int target , int start , int end, int col,int m,int n){
            if(start>end || col>n ||end>m){
                return false;
            }
        int mid=start+(end-start)/2;
        
            if(matrix[mid][col]==target){
                return true;
            }
            if(matrix[mid][col]<target){
              return col_search(matrix, target, mid+1,end,col,m,n);
            }
          else{
                return col_search(matrix,target,start,mid-1,col,m,n);
            }
        
    }
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0; int m=matrix.size(); int n = matrix[0].size();
        while(i<m&&j<n){
          bool rowAns = row_search(matrix, target,j,n-1,i,m,n);
            if(rowAns==true){
                return true;
            }
            bool colAns=col_search(matrix,target,i,m-1,j,m,n);
            if(colAns){
                return true;
            }
            
            
            i++; j++;
        }
       return false; 
    }
};
