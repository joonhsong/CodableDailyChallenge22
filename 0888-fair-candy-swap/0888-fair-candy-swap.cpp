class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> sol;
        sort(aliceSizes.begin(), aliceSizes.end());
        sort(bobSizes.begin(), bobSizes.end());
        int alice = 0;
        int bob = 0;
        for(auto i: aliceSizes){
            alice += i;
        }
        for(auto i: bobSizes){
            bob += i;
        }
        int m = (bob-alice)/2;
        
        for(auto i: aliceSizes){
            int x = lower_bound(bobSizes.begin(), bobSizes.end(), m+i) - bobSizes.begin();
            if(bobSizes[x] == i+m){
                sol.push_back(i);
                sol.push_back(i+m);
                break;
            }
        }
        return sol;
    }
};