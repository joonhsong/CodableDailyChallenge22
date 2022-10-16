class Solution {
public:
    int minAddToMakeValid(string s) {
        int c = 0;
        stack<char> ss;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                ss.push(s[i]);
            }
            else if(s[i] == ')'){
                if(ss.empty()){
                    c++;
                }
                else{
                    ss.pop();
                }
            }
        }
        return ss.size() + c;
    }
};