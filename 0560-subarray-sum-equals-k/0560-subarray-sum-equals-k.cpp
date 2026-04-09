class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int currsum=0, ans=0;
        for(int i=0; i<n; i++){
            currsum += nums[i];
            if(mpp.find(currsum-k)!=mpp.end()){
                ans += mpp[currsum-k];
            }
            mpp[currsum]++;
        }
        return ans;

    }
};