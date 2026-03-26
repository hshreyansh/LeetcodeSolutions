class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        long long prod=1;
        int maxneg = -1e9;
        int negcnt=0;
        int zerocnt=0;
        if(nums.size() == 1) return nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                zerocnt++;
                continue;
            }
            if(nums[i]<0){
                negcnt++;
                maxneg = max(nums[i], maxneg);
            }
            prod  = prod*nums[i];
        }
        if(zerocnt ==nums.size())
            return 0;
        if(negcnt%2 != 0 ){
            prod/= maxneg;
        }
        if(negcnt == 1 && zerocnt + negcnt == nums.size())
            return 0;
        return prod;
    }
};