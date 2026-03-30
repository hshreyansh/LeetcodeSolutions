class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return -1;
        int miniDif = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if( (nums[i]==1 && nums[j]==2) || (nums[i]==2 && nums[j]==1)){
                    int dif  = abs(i - j);
                    miniDif = min(dif, miniDif);
                }
            }
        }
        if(miniDif == INT_MAX) return -1;
        return miniDif;
    }
};