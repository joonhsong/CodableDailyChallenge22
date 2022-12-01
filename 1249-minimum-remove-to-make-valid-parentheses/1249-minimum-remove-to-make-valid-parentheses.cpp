class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> c;
        stack<int> n;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                c.push(s[i]);
                n.push(i);
            }
            else if(s[i] == ')'){
                if(c.empty()){
                    s.erase(s.begin()+i);
                    i--;
                }
                else{
                    c.pop();
                    n.pop();
                }
            }
        }
        
        if(!c.empty()){
            while(!n.empty()){
                int p = n.top();
                n.pop();
                c.pop();
                s.erase(s.begin()+p);
            }
        }
        return s;
        
    }
};