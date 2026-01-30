class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        int sum= accumulate(nums.begin(), nums.end(),0);
        int leftsum =0;
        for(int i=0; i<n; i++){

            int rightsum = sum -leftsum -nums[i];
            if(leftsum==rightsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};