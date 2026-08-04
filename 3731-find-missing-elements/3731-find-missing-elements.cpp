class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(), nums.end());
        int x= nums.front();
        int y= nums.back();
        for(int i=0; i<nums.size(); i++){
            while (x < nums[i]) {
                ans.push_back(x);
                x++;
            }
            if (x == nums[i]) x++;
        }
        return ans;
    }
};