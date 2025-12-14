class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        if(nums.size()==1 || k==0) return 0;
        int n= nums.size();
        int diff=0, mini=0, maxi=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<k; i++){
            mini += nums[i];
        }
        for(int j=n-k; j<n; j++){
            maxi += nums[j];
        }
        return diff=abs(mini-maxi);
    }
};