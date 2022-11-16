class Solution {
public:
    bool isPerfectSquare(int num) {
        bool sol = false;
        long long l = 0;
        long long h = num;
        long long sq = 1;
        long long m = (l+h)/2;
        
        while(l <= h){
            m = (l+h)/2;
            sq = m * m;
            if(sq == num){
                sol = true;
                break;
            }
            else if(sq > num){
                h = m - 1;
            }
            else if(sq < num){
                l = m + 1;
            }
        }
        return sol;
    }
};