class Solution {
public:
    int maxOperations(string s) {
        int n= s.size();
        int i=0;
        int onesCount=0;
        int result=0;
        while(i<n){
            if(s[i]=='0'){
                result += onesCount;
                while(i<n && s[i]=='0'){
                    i++;
                }
            }
            else{
                onesCount++;
                i++;
            }
        }
        return result;
    }
};