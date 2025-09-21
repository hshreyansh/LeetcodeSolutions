class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int i=0;
        int ans=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]%2 == 0){
                ans |= nums[i];
            }
            i++;
        }
        return ans;
    }
};