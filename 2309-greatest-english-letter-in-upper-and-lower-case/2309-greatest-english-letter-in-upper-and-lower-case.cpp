class Solution {
public:
    string greatestLetter(string s) {
        unordered_map<char,int> um;
        for(auto i: s){
            um[i]++;
        }
        sort(s.begin(), s.end());
        string st;
        for(int i = 0; i < s.size(); i++){
            char l = tolower(s[i]);
            char u = toupper(s[i]);
            if(um[l] && um[u]){
                st = u;
            }
        }
        return st;
    }
};