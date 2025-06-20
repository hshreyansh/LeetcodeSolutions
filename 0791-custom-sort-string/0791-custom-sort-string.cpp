class Solution {
public:
    string customSortString(string order, string s) {
        int freq[26] = {0};
        
        // Count frequency of each character in 's'
        for (char c : s) {
            freq[c - 'a']++;
        }

        string result = "";

        // Add characters from 'order' in the given order
        for (char c : order) {
            while (freq[c - 'a'] > 0) {
                result += c;
                freq[c - 'a']--;
            }
        }

        // Add remaining characters that were not in 'order'
        for (char c = 'a'; c <= 'z'; ++c) {
            while (freq[c - 'a'] > 0) {
                result += c;
                freq[c - 'a']--;
            }
        }

        return result;
    }
};
