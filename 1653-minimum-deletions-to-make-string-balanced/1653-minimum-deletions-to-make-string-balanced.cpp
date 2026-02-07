class Solution {
public:
    int minimumDeletions(string s) {
        int ans=0;
        int bcount=0;
        for(auto &c: s){
            if(c=='b'){
                bcount++;
            }
            else{
                if(bcount>0){
                    ans++;
                    bcount--;
                }
            }
        }
        return ans;
    }
};