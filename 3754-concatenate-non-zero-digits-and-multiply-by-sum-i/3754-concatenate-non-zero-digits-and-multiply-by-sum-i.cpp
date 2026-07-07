class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        int sum=0;
        string str;
        for(int i=0; i< s.size(); i++){
            if(s[i]!='0'){
                sum += (s[i]-'0');
                str.push_back(s[i]);
            }
        }
        long long num = 0;
        if (!str.empty()) {
            num = stoll(str);
        }
        return num*sum;

    }
};