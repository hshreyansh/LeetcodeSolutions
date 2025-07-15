class Solution {
public:
    bool isvowel(char ch)
    {
        ch=tolower(ch);
        return string("aeiou").find(ch) != string::npos;
    }
    bool isconsonant(char ch)
    {
        if(!isvowel(ch) && isalpha(ch))
        {
            return true;
        }
        else return false;
    }
    bool isValid(string word) {
        int n= word.size();
        int vowels=0, consonant=0;
        if(n>=3){
            for(char &ch:word)
            {
                if(!isalpha(ch) && !isdigit(ch)) return false;
                if(isvowel(ch))
                {
                    vowels++;
                }
                else if(isconsonant(ch))
                {
                    consonant++;
                }
            }
        }
        if(vowels>0 && consonant>0) return true;
        else return false;
    }
};