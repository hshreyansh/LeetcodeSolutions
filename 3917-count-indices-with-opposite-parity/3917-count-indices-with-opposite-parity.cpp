class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        
        for(int i=0; i<n; i++){
            int evencount=0;
            int oddcount=0;
            if(nums[i]%2==0){
                for(int j=i+1; j<n; j++){
                    if(nums[j]%2!=0){
                        oddcount++;
                    }
                }
                ans.push_back(oddcount);
            }
            else{
                for(int j=i+1; j<n; j++){
                    if(nums[j]%2==0){
                        evencount++;
                    }
                }
                ans.push_back(evencount);    
            }
        }
        return ans;
    }
};