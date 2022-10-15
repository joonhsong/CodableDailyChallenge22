class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        stack<char> b;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#' && !a.empty()){
                a.pop();
            }
            else if(s[i] != '#'){
                a.push(s[i]);
            }
        }
        for(int i = 0; i < t.size(); i++){
            if(t[i] == '#' && !b.empty()){
                b.pop();
            }
            else if(t[i] != '#'){
                b.push(t[i]);
            }
        }
        
        if(a.size() != b.size()){
            return false;
        }
        else{
            while(!a.empty() && !b.empty()){
                if(a.top() != b.top()){
                    return false;
                }
                else{
                    a.pop();
                    b.pop();
                }
            }
        }
        return true;
    }
};