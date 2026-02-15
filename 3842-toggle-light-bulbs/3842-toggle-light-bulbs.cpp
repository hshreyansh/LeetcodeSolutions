class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        sort(bulbs.begin(), bulbs.end());
        
        vector<int> ans;
        int n = bulbs.size();
        
        for(int i = 0; i < n; ) {
            if(i + 1 < n && bulbs[i] == bulbs[i+1]) {
                i += 2;  
            }
            else {
                ans.push_back(bulbs[i]);  
                i++;
            }
        }
        
        return ans;
    }
};