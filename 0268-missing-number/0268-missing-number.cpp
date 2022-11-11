class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0] != 0) return 0;
        if(nums.size() == 1 && nums[0] == 0) return 1;
        if(nums.size() == 2 && nums[0] == 0){
            if(nums[1] == 1) return 2;
            else return 1;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i){
                return i;
            }
        }
        return nums.size();
    }
};