class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int out = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i += 2){
            out += nums[i];
        }
        return out;
    }
};