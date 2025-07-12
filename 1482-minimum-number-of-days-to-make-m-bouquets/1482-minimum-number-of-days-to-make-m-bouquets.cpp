class Solution {
public:
    bool possible(vector<int>bloomDay, int mid, int k,int m)
    {
        int bCount=0;
        int adjCount=0;
        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=mid)
            {
                adjCount++;
            }
                else
                {
                    adjCount=0;
                }
                if(adjCount==k)
            {
                bCount++;
                adjCount=0;
            }
        }
            
        return bCount>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int s=1;
        int e=*max_element(bloomDay.begin(),bloomDay.end());
        int mid;
        int ans=-1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(possible(bloomDay,mid,k,m)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return ans;
    }
};