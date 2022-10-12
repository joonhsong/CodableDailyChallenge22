class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};
        for(int i = 0; i < s.size(); i++){
            int alpha = s[i] - 'a';
            count[alpha]++;
        }
        for(int j = 0; j < s.size(); j++){
            int alph = s[j] - 'a';
            if(count[alph] == 1){
                return j;
            }
        }
        return -1;
    }
};