class Solution {
public:
    string binary(int n){
        string ans = "";
        while(n){
            int bit = n % 2;
            ans.push_back('0' + bit);
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    bool consecutiveSetBits(int n) {
        int count=0;
        string num = binary(n);
        for (int i = 0; i + 1 < num.size(); i++) {
            if (num[i] == '1' && num[i + 1] == '1')
            {
                count++;
            }
        }
        return count == 1;
    }
};