class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        sort(costs.begin(), costs.end());
        int maxcount = 0;
    
        for(auto i : costs){
            if(i>coins){
                break;
            }
            if(i<=coins){
                maxcount++;
            }
            coins -= i;
            
        }
        return maxcount;
    }
};