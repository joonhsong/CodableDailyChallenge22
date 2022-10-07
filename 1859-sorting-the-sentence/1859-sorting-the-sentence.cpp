class Solution {
public:
    string sortSentence(string s) {
        vector<string> sen(9);
        string tmp = "";
        
        for(int i = 0; i < s.size(); i++){
            if(!isdigit(s[i])){
                tmp += s[i];
            }
            else{
                tmp += ' ';
                sen[s[i]-'0'-1] = tmp;
                tmp = "";
                i++;
            }
        }
        
        tmp = "";
        for(int j = 0; j < sen.size(); j++){
            tmp += sen[j];
        }
        tmp.pop_back();
        return tmp;
    }
};