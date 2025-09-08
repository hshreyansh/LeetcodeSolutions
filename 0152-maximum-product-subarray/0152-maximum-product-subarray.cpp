class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        int j=1;
        int prod = INT_MIN;
        if(n==1) return nums[i];
        while(i<n && j<n){
            prod=max(prod,(nums[i]*nums[j]));
            i++;
            j++;
        }
        return prod;
    }
};