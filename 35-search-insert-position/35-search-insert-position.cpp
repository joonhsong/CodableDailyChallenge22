class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int out;
        
        for(out = 0; out < nums.size(); out++){
            if(nums[out] == target){
                break;
            }
            else if(nums[out] > target){
                break;
            }
        }
        return out;
    }
};