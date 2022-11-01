class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        vector<char> vc;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9'){
                vc.push_back(s[i]);
            }
        }
        
        int st = 0;
        int en = vc.size() - 1;
        
        while(st <= en){
            if(vc[st] == vc[en]){
                st++;
                en--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};