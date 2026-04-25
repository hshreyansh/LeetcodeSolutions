class Solution {
public:
    bool validDigit(int n, int x) {
        bool flag = false;
        while(n>=10){
            int digit = n%10;
            if(digit == x ){
                flag = true;
            }
            n = n/10;
        }
        if(n!=x && flag == true){
            return true;
        }
        else return false;
    }
};