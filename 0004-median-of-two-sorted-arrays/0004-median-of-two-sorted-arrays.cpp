class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double mid;
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int n= nums1.size();
        if(n%2==0) //evn
        {
            mid=((float)nums1[n/2] + (float)nums1[(n/2)-1])/2;
        }
        else
        {
            mid=(nums1[n/2]);
        }
        return mid;
    }
};