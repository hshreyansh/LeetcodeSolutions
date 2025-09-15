class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n= text.size();
        int m= brokenLetters.size();
        unordered_set<char>result;
        for(auto ch: brokenLetters){
            result.insert(ch);
        }
        
        int count=0;
        stringstream ss(text);
        string word;
        while(ss>> word){
            bool broken = false;
            for(char c : word){
                if(result.find(c) != result.end()){
                    broken = true;
                    break;
                }
            }
            if(!broken) count++;
        }
        return count;
    }
};