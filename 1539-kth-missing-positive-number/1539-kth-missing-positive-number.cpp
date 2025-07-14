class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s=0;
        int n=arr.size();
        int e=n-1;
        int mid=-1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return s+k;
    }
};