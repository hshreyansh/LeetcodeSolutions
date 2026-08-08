class Solution {
public:
    int calculate(string s) {
        stack<long long> st;

        long long num = 0;
        long long res = 0;
        long long sign = 1;

        int n = s.length();

        for(int i = 0; i < n; i++) {

            if(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            else if(s[i] == '+') {
                res += num * sign;
                num = 0;
                sign = 1;
            }

            else if(s[i] == '-') {
                res += num * sign;
                num = 0;
                sign = -1;
            }

            else if(s[i] == '(') {
                st.push(res);
                st.push(sign);

                res = 0;
                num = 0;
                sign = 1;
            }

            else if(s[i] == ')') {
                res += num * sign;
                num = 0;

                long long stack_sign = st.top();
                st.pop();

                long long stack_result = st.top();
                st.pop();

                res *= stack_sign;
                res += stack_result;
            }
        }

        res += num * sign;

        return (int)res;
    }
};