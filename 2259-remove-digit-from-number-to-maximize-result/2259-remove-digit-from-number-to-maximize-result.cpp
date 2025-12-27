class Solution {
public:
    string removeDigit(string number, char digit) {
        int n = number.size();

        for(int i=0; i<n; i++){
            if(number[i] == digit && number[i] < number[i+1]){
                number.erase(number.begin() + i);
                return number;
            }
        }
        for (int i= n-1; i>=0; i--) {
            if (number[i] == digit) {
                number.erase(number.begin() + i);
                break;
            }
        }
        return number;
    }
};