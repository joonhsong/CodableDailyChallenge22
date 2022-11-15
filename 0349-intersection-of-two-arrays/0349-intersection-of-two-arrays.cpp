class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us(nums1.begin(), nums1.end());
        vector<int> num;
        
        for(int i = 0; i < nums2.size(); i++){
            if(us.find(nums2[i]) != us.end()){
                num.push_back(nums2[i]);
                us.erase(nums2[i]);
            }
        }
        return num;
    }
};