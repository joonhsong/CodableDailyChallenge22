class Solution {
public:
    string intToRoman(int num) {
        map<int, std::string> rm = {
            {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"},{40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}
        };
        string s = "";
        
        for(auto itr = rm.rbegin(); itr != rm.rend(); ++itr){
            while(num >= itr->first){
                s += itr->second;
                num -= itr->first;
            }
        }
        return s;
    }
};