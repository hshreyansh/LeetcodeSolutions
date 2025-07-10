class Solution {
public:
    long long solve(vector<int>& piles, int mid, int h)
    {
        long long totalhours=0;
        for(int i=0; i<piles.size(); i++){
            totalhours += ceil((double)piles[i]/mid);
        }
        return totalhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int e=*max_element(piles.begin(), piles.end());
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            long long totalhours=solve(piles,mid,h);
            if(totalhours<=h)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return s;
    }
};