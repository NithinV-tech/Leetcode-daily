class Solution {
    public:
        int minimumIndex(vector<int>& nums) 
        {
          
          unordered_map<int,int>mp;
          int mx=0,cnt=0;
    
          for(auto it:nums)
          mp[it]++;
    
          for(auto it:mp)
          {
              if(it.second >cnt && it.second > nums.size()/2)
              {
                cnt = it.second;
                mx  = it.first;
              }
    
          }
    
          int ctr=0;
    
          for(int i=0;i<nums.size();i++)
          {
             if(nums[i] == mx)
             {
                ctr++;
    
                if((i+1)/2 < ctr)
                {
                 int rem = cnt - ctr;
                 if(rem > (nums.size()-(i+1))/2)   
                return i;
             }
    
          }
          }
    
    
          return -1;
    
    
        }
    };