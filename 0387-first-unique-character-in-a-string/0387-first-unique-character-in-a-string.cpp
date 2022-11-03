class Solution {
public:
    int firstUniqChar(string s) {
        for(int i = 0; i < s.length(); i++){
            bool mark = true;
            for(int j = 0; j < s.length(); j++){
                if(i != j && s[i] == s[j]){
                    mark = false;
                    break;
                }
            }
            if(mark == true) return i;
        }
        return -1;
    }
};