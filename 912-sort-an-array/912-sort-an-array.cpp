class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());   
        return nums;
        
    }
    /*int end, curr = nums.size();
	if (nums.size() <= 1){
        return nums;
    }
	for (end = nums.size() - 1; end; end--){
	    for (curr = 0; curr < end; curr++){
			if (nums[curr] > nums[curr + 1]){
				swap(nums[curr], nums[curr + 1]);
            }
        }
    }
        return nums;
    }*/
};
