class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n= nums.size();
        int zero=0, one=0;
        int ans=0;
        unordered_map<int, int> mpp;
        mpp[0]=-1;
        for(int i=0; i<n; i++){
            if(nums[i]==0) zero++;
            else one++;
            int d = one-zero;
            if(d==0) ans = max(ans, i+1);
            if(mpp.find(d)==mpp.end()){
                mpp[d]=i;
            }else{
                int idx = mpp[d];
                int len = i-idx;
                ans = max(ans, len);
            }
        }
        return ans;
    }
};