class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        int left=0;
        int right=0;
        int jumps=0;

        for(int i=0; i<n-1; i++){
            right = max(right, i+nums[i]);
            if(i == left){
                jumps++;
                left = right;
            }
        }
        return jumps;
    }
};