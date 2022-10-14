class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> stu;
        stack<int> sand;
        int leave = 0;
        
        for(int i = sandwiches.size()-1; i >= 0; i--){
            sand.push(sandwiches[i]);
        }
        
        for(int j = 0; j < students.size(); j++){
            stu.push(students[j]);
        }
        
        while(!stu.empty()){
            if(sand.top() == stu.front()){
                leave = 0;
                sand.pop();
                stu.pop();
            }
            else{
                leave++;
                int fr = stu.front();
                stu.pop();
                stu.push(fr);
            }
            if(leave == stu.size()){
                return leave;
            }
        }
        
       return 0;
        
        
    }
};