class Solution {
public:
    int maxProduct(int n) {
        int maxprod = 0;
        int mx = 0;

        while(n) {
            int digit= n % 10;
            n/= 10;
            maxprod= max(maxprod, digit * mx);
            mx= max(mx, digit);
        }
        return maxprod;
    }
};