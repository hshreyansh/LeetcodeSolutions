class Solution {
public:
    int bitwiseComplement(int n) {
        int counter=0, result=0;
        if(n==0) return 1;
        while(n){
            int bit = n%2;
            result += (pow(2, counter) * !bit);
            n= n/2;
            counter++;
        }
        return result;
    }
};