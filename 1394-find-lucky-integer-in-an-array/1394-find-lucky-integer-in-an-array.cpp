class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        int count=-1;
        unordered_map<int,int>mpp;
        for(int i=0; i<n; i++)
        {
            mpp[arr[i]]++;
        }
        for(auto i:mpp)
        {
            if(i.first==i.second)
            {
               count=max(count,i.second);
            }
        }
        return count;
    }
};