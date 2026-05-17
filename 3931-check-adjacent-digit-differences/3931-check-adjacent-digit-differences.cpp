class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {

        for(int i=0; i<s.size()-1; i++){
            int dif = abs(s[i]-s[i+1]);
            if(dif >2) return false;
        }
        return true;
    }
};