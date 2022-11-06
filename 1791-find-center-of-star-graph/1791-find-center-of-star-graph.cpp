class Solution {
public:
    // 1 : {2}
    // 2 : {1, 3}
    // 3 : {2}
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> graph;
        for(auto v: edges){
            int v1 = v[0];
            int v2 = v[1];
            
            if (graph.find(v1) != graph.end()) {
                graph[v1].push_back(v2);
            }
            else {
                graph[v1] = {v2};
            }
            if (graph.find(v2) != graph.end()) {
                graph[v2].push_back(v1);
            }
            else {
                graph[v2] = {v1};
            }
        }
        vector<int> t = graph.at(1);
        int tmp = t.size();
        int key = 1;
        for (auto itr : graph) {
            if(itr.second.size() > tmp){
                tmp = itr.second.size();
                key = itr.first;
            }
            else{
                continue;
            }
        }
        
        return key;
        
    }
};