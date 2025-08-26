class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int m=dimensions.size();
        
        int maxdiagonal=0;
        int maxarea=0;
        for(int i=0; i<m; i++){
            int x= dimensions[i][0];
            int y= dimensions[i][1];
            int diagonal= x*x + y*y;
            int area= x*y;
            if(diagonal>maxdiagonal){
                maxdiagonal=diagonal;
                maxarea=area;
            }
            else if(diagonal==maxdiagonal){
                maxarea=max(maxarea,area);
            }
        }
        return maxarea;
    }
};