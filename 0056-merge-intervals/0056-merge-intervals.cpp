class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> sol;
        sort(intervals.begin(), intervals.end());
        
        sol.push_back(intervals[0]);
        
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] > sol[sol.size()-1][1]){
                sol.push_back(intervals[i]);
            }
            else{
                sol[sol.size()-1][1] = max(intervals[i][1], sol[sol.size()-1][1]);
            }
        }
        return sol;
    }
};