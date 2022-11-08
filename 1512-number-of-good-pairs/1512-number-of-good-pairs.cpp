class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int nip = 0;
        int i = 0;
        int j = 1;
        
        while(i != nums.size()-1){
            if(nums[i] == nums[j]){
                nip++;
            }
            if(j < nums.size()-1){
                j++;
            }
            else{
                i++;
                j = i + 1;
            }
        }
        return nip;
    }
};