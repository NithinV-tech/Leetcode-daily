class Solution {
    public:
        int minimumOperations(vector<int>& nums) 
        {
    
          unordered_map<int,int>mp;
    
          for(int i = nums.size()-1;i>=0;i--)
          {
             mp[nums[i]]++;
             if(mp[nums[i]]==2)
             {
                int res = ceil((float)(i+1)/3);
                return res;
             }
    
    
    
          }
    
          return 0;
    
    
    
        }
    };