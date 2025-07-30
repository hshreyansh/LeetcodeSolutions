class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freqS, freqT;
    for (char ch : s) freqS[ch]++;
    for (char ch : t) freqT[ch]++;
    return freqS==freqT;
    }
};