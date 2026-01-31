class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n= arr.size();
        int sum=0;
        int totalsum = accumulate(arr.begin(), arr.end(),0);

        if(totalsum % 3 !=0) return false;
        int target = totalsum/3;
        int count = 0;
        for(int i=0; i<n-1; i++){
            sum += arr[i];
            if(sum == target){
                count++;
                sum=0;
            }
            if(count==2){
                return true;
            }
        }
        return false;
    }
};
