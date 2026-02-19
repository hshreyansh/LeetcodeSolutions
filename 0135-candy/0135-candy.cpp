class Solution {
public:
    int candy(vector<int>& ratings) {
        int n= ratings.size();
        int candysum= n;
        int i=1;
        while(i<n){
            if(ratings[i]== ratings[i-1]){
                i++;
                continue;
            }
            int peak=0;
            while(ratings[i] > ratings[i-1]){
                peak++;
                candysum += peak;
                i++;
                if(i==n) return candysum;
            }
            int down=0;
            while(i<n &&ratings[i] < ratings[i-1]){
                down++;
                candysum+= down;
                i++;
            }
        candysum -= min(down, peak);
        }
        return candysum;
    }
};