class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        //Using Dynamic Programming....!!
        
        int n = envelopes.size();
        if(n == 0)
        {
            return 0;
        }
        
      sort (envelopes.begin(),envelopes.end());
        
        vector<int>dp(n+1,1);  //LIS Array
            
        int max = 1;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<i;++j)
            {
                if(envelopes[i][0] > envelopes[j][0] and envelopes[i][1] > envelopes[j][1] and 1+dp[j] > dp[i])
                {
                    dp[i] = 1 + dp[j];
                    
                    if(max < dp[i])
                    {
                        max = dp[i];
                    }
                }
            }
        }
        
        return max;
        
    }
};