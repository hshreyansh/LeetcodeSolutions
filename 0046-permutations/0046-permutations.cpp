class Solution {
public:
    vector<vector<int>>ans;
    unordered_set<int> stt;
    int n;
    void solve(vector<int>&temp, vector<int> &nums){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(stt.find(nums[i])==stt.end()){
                temp.push_back(nums[i]);
                stt.insert(nums[i]);

                solve(temp, nums);

                temp.pop_back();
                stt.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        n =nums.size();
        vector<int>temp;
        solve(temp,nums);
        return ans;
    }
};