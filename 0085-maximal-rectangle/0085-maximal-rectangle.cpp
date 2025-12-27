class Solution {
public:
    vector<int>findPSE(vector<int>& heights, int n){
        vector<int> result(n);
        stack<int>st;
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                result[i] = -1;
            }
            else{
                result[i]=st.top();
            }
            st.push(i);
        }
        return result;
    }
    vector<int>findNSE(vector<int>& heights, int n){
        vector<int> result(n);
        stack<int>st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                result[i] = n;
            }
            else{
                result[i] = st.top();
            }
            st.push(i);
        }
        return result;
    }
    int histogram(vector<int>& heights) {
        int n= heights.size();
        
        vector<int> right=findNSE(heights, n);
        vector<int>left=findPSE(heights, n);
        int area=0;
        for(int i=0; i<n; i++){
            int width = right[i]-left[i]-1;
            area = max(area, heights[i] * width);
        }
        return area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m= matrix[0].size();
        vector<vector<int>> Psum(n, vector<int>(m));
        for(int j=0; j<m; j++){
            int sum=0;
            for(int i=0; i<n; i++){
                sum += matrix[i][j]-'0';
                if(matrix[i][j]=='0'){
                    sum = 0;
                }
                Psum[i][j]= sum;
            }
        }
        int maxarea= 0;
        for(int i=0; i<n; i++){
            int area = histogram(Psum[i]);
            maxarea = max(area,maxarea);
        }
        return maxarea;
    }
};