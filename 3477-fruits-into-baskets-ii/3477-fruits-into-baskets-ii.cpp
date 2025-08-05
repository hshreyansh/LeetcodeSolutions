class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int m= baskets.size();
        vector<int> availableBaskets= baskets;
        int count=0;
        for(int i=0; i<n; i++)
            {
                bool placed = false;
                for(int j=0; j<m; j++)
                {
                    
                if(availableBaskets[j]>=fruits[i])
                {
                    availableBaskets[j]=0;
                    placed =true;
                    break;
                }
                    
            }

                if(!placed)
                    {
                        count++;
                    }
                
        }
        return count;
    }
};