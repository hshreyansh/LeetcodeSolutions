class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;
        int cnt = 0;

        int diff = start ^ goal;
        while(diff > 0){
            ans = diff % 2;
            if(ans % 2 == 1) cnt++;
            diff = diff / 2;
        }

        return cnt;
    }
};