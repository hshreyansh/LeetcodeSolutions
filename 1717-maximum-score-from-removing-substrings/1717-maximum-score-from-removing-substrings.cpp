class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int total = 0;
        string pattern1 = x > y ? "ab" : "ba";
        int score1 = max(x, y);
        string pattern2 = x > y ? "ba" : "ab";
        int score2 = min(x, y);
        
        // First remove all of the higher score pattern
        while (true) {
            size_t pos = s.find(pattern1);
            if (pos == string::npos) break;
            s.erase(pos, 2);
            total += score1;
        }

        // Then remove all of the lower score pattern
        while (true) {
            size_t pos = s.find(pattern2);
            if (pos == string::npos) break;
            s.erase(pos, 2);
            total += score2;
        }

        return total;
    }
};
