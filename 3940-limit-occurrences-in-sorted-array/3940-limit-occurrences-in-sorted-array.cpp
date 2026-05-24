class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
         
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int num : nums){
            if(freq[num] < k){
                ans.push_back(num);
                freq[num]++;
            }
        }
        return ans;
    }
};