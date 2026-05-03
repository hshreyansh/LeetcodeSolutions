class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    int reverseNumber(int x) {
        int rev = 0;
        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }
        return rev;
    }
    int sumOfPrimesInRange(int n) {
        int sum =0;
        for(int i = min(n,reverseNumber(n)); i<=max(n,reverseNumber(n)); i++){
            if(isPrime(i)){
                sum += i;
            }
        }
        return sum;
    }
};