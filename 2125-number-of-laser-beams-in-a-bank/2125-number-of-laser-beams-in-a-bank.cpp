class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n= bank.size();

        int prevcount=0;
        int result=0;
        for(int i=0; i<n; i++)
        {
            
            int currcount=0;
            for(char &ch:bank[i])
            {
                if(ch=='1')
                {
                    currcount++;
                }
            }
            result += (currcount * prevcount);
            if(currcount!=0)
            {
                prevcount=currcount;
            }
        }
        return result;
    }
};