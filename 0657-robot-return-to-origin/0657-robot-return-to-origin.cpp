class Solution {
public:
    bool judgeCircle(string moves) {
        int L = 0, R = 0, U = 0, D = 0;
        for(int i=0; i<moves.size(); i++){
            if(moves[i]=='L'){
                L++;
            }
            if(moves[i]=='R'){
                R++;
            }
            if(moves[i]=='U'){
                U++;
            }
            if(moves[i]=='D'){
                D++;
            }
        }
        if(L==R && U==D) return true;
        else return false;
    }
};