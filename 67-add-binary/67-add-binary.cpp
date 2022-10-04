class Solution {
public:
    string addBinary(string a, string b) {
        string addbin = "";
        int as = a.size()-1;
        int bs = b.size()-1;
        int c = 0;
        
        while(as >= 0 || bs >= 0 || c > 0){
            int sum = ((as < 0)? 0 : (a[as--] - '0')) + ((bs < 0)? 0 : (b[bs--] - '0')) + c;
            c = sum/2;
            addbin += '0' + sum%2;
        }
        reverse(addbin.begin(), addbin.end());
        return addbin;
        
    }
};