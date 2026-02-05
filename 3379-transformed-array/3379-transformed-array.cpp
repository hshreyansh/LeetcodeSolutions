class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0; i<n; i++){
            int rotate = nums[i]%n;
            int idx = (i+rotate)%n;
            if(idx<0) idx+=n;
            ans[i]= nums[idx];
        }
        return ans;
    }
};