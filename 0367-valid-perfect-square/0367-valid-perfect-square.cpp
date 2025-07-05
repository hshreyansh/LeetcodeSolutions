class Solution {
public:
    bool isPerfectSquare(int num) {
        long long s=0;
        long long n= num;
        long long e=num;
        long long  mid=s+(e-s)/2;
        int ans;

        while(s<=e){
            mid=s+(e-s)/2;
            if(mid*mid>n)
            {
                e=mid-1;
            }
            else if(mid*mid<n)
            {

                s=mid+1;
                ans=mid;
            }
            else if(mid*mid==n)
            {
                return true;
            }
        }
        return false;
    }
};
