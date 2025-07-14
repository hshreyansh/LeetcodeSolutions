class Solution {
public:
    int solve(vector<int>& weights, int mid)
    {
        int days=1;
        int load=0;
        for(int i=0; i<weights.size(); i++)
        {
            if(load+weights[i]>mid)
            {
                days=days+1;
                load=weights[i];
            }
            else
            {
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=*max_element(weights.begin(), weights.end());
        int e=accumulate(weights.begin(), weights.end(),0);
        int mid;
        int ans;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            int NoOfDays = solve(weights,mid);
            if(NoOfDays<=days)
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