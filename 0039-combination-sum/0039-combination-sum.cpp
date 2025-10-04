class Solution {
public:
    void solve(int i, vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int> &check){
        if(i == candidates.size()){
            if(target==0){
                ans.push_back(check);
            }
            return;             
        }
        if(candidates[i]<=target){
            check.push_back(candidates[i]);
            solve(i, candidates, target-candidates[i], ans, check);
            check.pop_back();
        }
        solve(i+1, candidates, target, ans, check);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int> check;
        solve(0, candidates, target, ans, check);
        return ans;
    }
};