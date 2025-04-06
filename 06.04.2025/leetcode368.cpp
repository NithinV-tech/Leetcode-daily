class Solution {
    public:
        vector<int> largestDivisibleSubset(vector<int>& nums) 
        {
              
              sort(nums.begin(),nums.end());
              unordered_map<int,int>mp;
              int mx=0,ind=0;
    
              for(int i=0;i<nums.size();i++)
              mp[i]=i;
              vector<int>dp(nums.size(),1);
    
              for(int i=1;i<nums.size();i++)
              {
                for(int j=i-1;j>=0;j--)
                {
                   if((nums[i]%nums[j])==0)
                   {
                       if(dp[i] < dp[j]+1)
                       {
                           dp[i] = dp[j]+1;
                           mp[i] = j;
                           if(dp[i] > mx)
                           {
                           mx = max(mx,dp[i]);
                           ind = i;
                           }
                           
    
                       }
                       
                   }
    
    
    
    
                }
    
    
              }
    
              vector<int>res;
              res.push_back(nums[ind]);
              while(mp[ind] != ind)
              {
                    res.push_back(nums[mp[ind]]);
                    ind = mp[ind];
    
              }
    
              return res;
    
    
        }
    };