class Solution {
public:
    int findComplement(int num) {
        int counter=0, result=0;
        if(num==0) return 1;
        while(num){
            int bit = num%2;
            result += (pow(2, counter) * !bit);
            num= num/2;
            counter++;
        }
        return result;
    }
};