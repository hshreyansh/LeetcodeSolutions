class Solution {
public:

    int isBinary(int x){
        string str = "";
        while(x>0){
            int bit = x&1;
            str.push_back('0'+ bit);
            x = x >>1;
        }
        int num = 0;
        for (char c : str) {
            num = num * 2 + (c - '0');
        }
        return num;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        int n = nums.size();
        vector<pair<long long,int>> result;

        for(auto &x: nums){
            result.push_back({isBinary(x),x});
        }
        sort(result.begin(), result.end(), [&](auto &a, auto &b){
            if (a.first == b.first) return a.second < b.second;  
            return a.first < b.first;
        });
        vector<int> ans;
        for (auto &p : result) ans.push_back(p.second);
        return ans;
    }
};