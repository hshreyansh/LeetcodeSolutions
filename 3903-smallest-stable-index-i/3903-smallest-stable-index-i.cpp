class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> preMax(n);
        vector<int> SufMi(n);
        
        preMax[0] = nums[0];
        SufMi[n-1] = nums[n-1];
        for(int i = 1; i < n; i++){
            preMax[i] = max(preMax[i-1],nums[i]);
        }
        for(int i = n-2; i >= 0; i--){
            SufMi[i] = min(SufMi[i+1],nums[i]);
        }

        for(int i = 0; i <n; i++){
            if(preMax[i]-SufMi[i] <= k){
                return i;
            }
        }
        return -1;
    }
};