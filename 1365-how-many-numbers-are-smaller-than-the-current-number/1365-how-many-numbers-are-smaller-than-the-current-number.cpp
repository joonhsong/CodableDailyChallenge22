class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> out;
        int count;
        for(int i = 0; i < nums.size(); i++){
            count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(i == j) continue;
                if(nums[i] > nums[j]){
                    count++;
                }
            }
            out.push_back(count);
        }
        return out;
    }
};