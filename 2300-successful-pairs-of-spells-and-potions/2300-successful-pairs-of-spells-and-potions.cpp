class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int m= spells.size();
        int n=potions.size();
        vector<int>ans;
        sort(potions.begin(), potions.end());
        int maxPotion= potions[n-1];

        for(int i=0; i<m; i++){
            int spell= spells[i];

            long long minPotion= ceil((1.0*success)/spell);

            if(minPotion>maxPotion) {
                ans.push_back(0);
                continue;
            }

            int index = lower_bound(potions.begin(), potions.end(), minPotion)- potions.begin();
            int count = n-index;
            ans.push_back(count);
        }
        return ans;
    }
};