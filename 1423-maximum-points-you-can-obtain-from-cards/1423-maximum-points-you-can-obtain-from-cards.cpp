class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0; i<k; i++){
            sum+=cardPoints[i];
        }
        int currsum=sum;
        int end=cardPoints.size()-1;
        for(int i=k-1; i>=0; i--){
            currsum-=cardPoints[i];
            currsum+= cardPoints[end];
            end--;
            sum= max(sum,currsum);
        }
        return sum;
    }
};