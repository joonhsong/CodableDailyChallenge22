class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tmp(numRows);
        int i, j;
        
        for(i = 0; i < numRows; i++){
            tmp[i].resize(i+1);
            tmp[i][0] = 1;
            tmp[i][i] = 1;
            
            for(j = 1; j < i; j++){
                tmp[i][j] = tmp[i-1][j-1] + tmp[i-1][j];
            }
            
        }
        return tmp;
    }
};

     