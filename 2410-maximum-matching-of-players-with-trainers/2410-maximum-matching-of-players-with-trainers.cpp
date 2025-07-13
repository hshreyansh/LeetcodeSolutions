class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int ans=0;
        if(trainers.size()==1) return 1;
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        for(int i=1; i<players.size(); i++)
        {
            for(int j=1; j<trainers.size(); j++)
            {
                if(players[i]<=trainers[j])
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};