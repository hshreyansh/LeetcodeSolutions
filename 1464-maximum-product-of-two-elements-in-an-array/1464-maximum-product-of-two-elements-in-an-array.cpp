class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod = 0;
        int curr=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                curr = max(curr, (nums[i]-1)*(nums[j]-1));
                maxprod = max(curr, maxprod);
            }
        }
        return maxprod;

    }
};