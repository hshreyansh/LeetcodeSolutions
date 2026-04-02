class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V= graph.size();
        vector<vector<int>> adj(V);

        queue<int>q;
        vector<int>indegree(V, 0);

        for(int u=0; u<V; u++){
            for(int &v: graph[u]){
                adj[v].push_back(u);
                indegree[u]++;
            }
        }
        for(int i=0; i<V; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<bool>safe(V, false);

        while(!q.empty()){
            int node = q.front();
            q.pop();
            safe[node]= true;
            for(int &v: adj[node]){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
        }
        vector<int>safeNodes;
        for(int i=0; i<V; i++){
            if(safe[i]){
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};