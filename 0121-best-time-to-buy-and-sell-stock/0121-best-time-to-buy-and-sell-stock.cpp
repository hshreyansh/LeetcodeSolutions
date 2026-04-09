class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int i=0; int j=1;
        int profit=0;
        while(j<n){
            if(prices[j]>prices[i]){
                profit=  max(profit, prices[j]-prices[i]);
            }
            else{
                i=j;
            }
            j++;
        }
        return profit;
    }
};