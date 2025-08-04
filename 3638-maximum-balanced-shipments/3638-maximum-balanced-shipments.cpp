class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int n = weight.size();
        int balanced = 0;
        int j = 1;  
        for (int i = 0; i < n; ) {
            if (j <= i) j = i + 1;
            if (j >= n) break;  
            int big = *max_element(weight.begin() + i, weight.begin() + j);
            if (weight[j] < big) {
                balanced++;
                i = j + 1;
                j = i + 1;
            } 
            else
            {
                j++;
            }
        }
        return balanced;
    }
};
