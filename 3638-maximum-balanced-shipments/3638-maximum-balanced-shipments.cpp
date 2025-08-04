class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int ans= 0;
        int n = weight.size();
        for( int i =0;i<n;i++)
        {
            int maxi = weight[i];
            while( i< n )
            {
                maxi = max( maxi, weight[i] );
                if( weight[i]!= maxi)
                {
                    ans++;
                    break;
                }
                i++;
            }
        }
        return ans ;
    }
};