class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> a;
        
        for(auto i : arr){
            a[i]++;
        }
        int luck = -1;
        for(auto i : a){
            if(i.first == i.second){
                luck = max(i.first, luck);
            }
        }
        return luck;
    }
};