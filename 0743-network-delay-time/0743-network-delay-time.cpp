class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto &t: times){
            int u= t[0];
            int v= t[1];
            int w= t[2];
            adj[u].push_back({v,w});
        }
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int>result(n+1, INT_MAX);
        result[k] =0;
        pq.push({0,k});
        while(!pq.empty()){
            int d = pq.top().first;
            int node= pq.top().second;
            pq.pop();
            for(auto &neighbour: adj[node]){
                int adjNode = neighbour.first;
                int dist = neighbour.second;
                if(d+dist <result[adjNode]){
                    result[adjNode]= d+dist;
                    pq.push({d+dist, adjNode});
                }
            }
        }
        int ans=0;
        for(int i = 1; i <= n; i++){
            if(result[i] == INT_MAX) return -1;
            ans = max(ans, result[i]);
        }

        return ans;
    }
};