class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int a= nums[0];
        int b= nums[n-1];
        while(b!=a){
        if(b>a)
        {
            b = b - a;
        }
        else a = a-b;
        }
        return b;
    }
};