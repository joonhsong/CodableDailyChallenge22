class Solution {
public:
    int singleNumber(vector<int>& nums) {

    sort(nums.begin(), nums.end());
    if(nums.size() > 1){
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
            i++;
        }
    }
        return nums[0];
    }
};