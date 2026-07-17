class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n =nums.size();
        int mx = 0;
        vector<int> prefixGcd;
        for(auto x : nums){
            mx = max(mx, x);
            prefixGcd.push_back(__gcd(x, mx));
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        int first=0; 
        int last= prefixGcd.size()-1;
        long long sum=0;
        while(first<last){
            sum += __gcd(prefixGcd[first], prefixGcd[last]);
            first++;
            last--;
        }
        return sum;
    }
};