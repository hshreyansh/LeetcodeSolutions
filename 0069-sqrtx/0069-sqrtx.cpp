class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int n= x;
        int e=x;
        int mid=s+(e-s)/2;

        while(s<=e){
            mid=s+(e-s)/2;
            if(mid*mid>n)
            {
                e=mid-1;
            }
            else if(mid*mid<n)
            {
                s=mid+1;
            }
            else if(mid*mid==n)
            {
                return mid;
            }
        }
        return mid-1;
    }
};