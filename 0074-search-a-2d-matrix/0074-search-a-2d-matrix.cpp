class Solution {
public:
    int search(vector<int>& m, int t, int l, int h){
        if(l > h) return false;
        else{
            int mid = (l+h)/2;
            if(t == m[mid]){
                return true;
            }
            else if(t > m[mid]){
                return search(m, t, mid+1, h);
            }
            else{
                return search(m, t, l, mid-1);
            }
        }
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix.size();
        int row = matrix[0].size();
        int tmp = 0;
        
        for(int i = 0; i < col; i++){
            if(target >= matrix[i][0]){
                tmp = i;
            }
            else{
                break;
            }
        }
        int low = 0;
        int high = matrix[tmp].size()-1;
        
        return search(matrix[tmp], target, low, high);
        
        
    }
};