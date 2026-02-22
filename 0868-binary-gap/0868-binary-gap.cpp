class Solution {
public:
    int binaryGap(int n) {
        int ans = 0;
        int prev = -1;
        int i = 0;       
        
        while(n > 0){
            if(n % 2 == 1){
                if(prev != -1){
                    ans = max(ans, i - prev);
                }
                prev = i;
            }
            n = n / 2;
            i++;
        }
        
        return ans;
    }
};