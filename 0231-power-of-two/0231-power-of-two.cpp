class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n%2==0){
            return true;
        }
        return false;
    }
};