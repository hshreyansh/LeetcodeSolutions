class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return -1;
        int miniDif = INT_MAX;
        int one=-1;
        int two=-1;
        for(int i=0; i<n; i++){
            if(nums[i]==1) one=i;
            else if(nums[i]==2) two=i;
            if(one!=-1 & two!= -1){
                miniDif = min(miniDif, abs(one-two));
            }
        }
        if(miniDif == INT_MAX) return -1;
        return miniDif;
    }
};