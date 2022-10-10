class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> output;
        deque<int> temp;
        for(int i = 0; i < nums.size(); i++){
            if(!temp.empty() && temp.front() == i - k){
                temp.pop_front();
            }
            while(!temp.empty() && nums[temp.back()] <= nums[i]){
                temp.pop_back();
            }
            temp.push_back(i);
            if(i >= k - 1){
                output.push_back(nums[temp.front()]);
            }
        }
        return output;
    }
};