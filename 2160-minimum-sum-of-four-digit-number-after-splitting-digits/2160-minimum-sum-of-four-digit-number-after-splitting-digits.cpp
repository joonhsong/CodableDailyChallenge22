class Solution {
public:
    int minimumSum(int num) {
        vector<int> minsum;
        
        while(num > 0){
            minsum.push_back(num%10);
            num = num/10;
        }
        sort(minsum.begin(), minsum.end());
        int a, b;
        
        a = (minsum[0]*10) + minsum[2];
        b = (minsum[1]*10) + minsum[3];
        int output = a + b;
        return output;
    }
};