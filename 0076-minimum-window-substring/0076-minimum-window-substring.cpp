class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size(), m=t.size();
        int min_len=1e9;
        
        int min_i=-1;
        
        unordered_map<char,int>target,window;
        
        for(auto it:t){
            target[it]++;
        }
        
        int need=target.size();
        int have=0;
        
        int i=0;
        for(int j=0;j<n;j++){
            char c=s[j];  // A->> target me hai?
            window[c]++;
            if(target[c]>0 && window[c]==target[c]){
                have++;
            }
            while(have==need){
                //  update 
                // minlen= min(minlen, j-i+1);
                                
                if(j-i+1<min_len) {
                    min_len=j-i+1;
                    min_i=i;
                }
                //  shrink
                
                char lc=s[i];
                window[lc]--;
                if(target[lc]>0 && window[lc]<target[lc]){
                    have--;
                }
                i++;   
            }
        }   
        if(min_len==1e9){
            return "";
        }
        return s.substr(min_i,min_len);
    }
}; 