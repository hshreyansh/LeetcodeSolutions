class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int>ans;
        vector<int>temp=nums;
        sort(nums.rbegin(), nums.rend());
        unordered_map<int,int>mpp;
        for(int i=0; i<k; i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:temp)
        {
            if(mpp[it]-->0){
                ans.push_back(it);
            }
        }
        return ans;
    }
};