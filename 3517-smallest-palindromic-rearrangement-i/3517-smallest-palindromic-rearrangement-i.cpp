class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
// another way to solve but costs extra space
        sort(s.begin(), s.begin() + n / 2);

        string ans = s.substr(0, n / 2);
        if (n % 2) ans += s[n / 2];

        string temp = s.substr(0, n / 2);
        reverse(temp.begin(), temp.end());

        ans += temp;
        return ans;
    }
};