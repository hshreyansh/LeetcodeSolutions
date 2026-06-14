class Solution {
public:
    bool checkGoodInteger(int n) {
        string str = to_string(n);
        long long digitSum=0;
        long long squareSum=0;
        for(int i=0; i<str.size(); i++){
            digitSum += str[i]-'0';
            squareSum += (str[i]-'0') * (str[i]-'0');
        }
        return (squareSum - digitSum) >= 50 ? true : false;
    }
};