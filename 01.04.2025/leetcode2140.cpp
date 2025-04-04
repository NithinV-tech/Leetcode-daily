class Solution {
    public:
       long long solve(vector<vector<int>>&q,int ind,vector<long long>&dp)
       {
           if(ind >= q.size())
           return 0;
    
            if(dp[ind]!=-1)
            return dp[ind];
    
           long long res1  = q[ind][0] + solve(q,ind + q[ind][1]+1,dp);
           long long res2 = solve(q,ind+1,dp);
    
           return dp[ind] = max(res1,res2);
       }
    
        long long mostPoints(vector<vector<int>>& q) 
        {
    
          vector<long long>dp(q.size(),-1);
          return solve(q,0,dp);
    
        }
    };