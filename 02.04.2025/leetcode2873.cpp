class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) 
        {
           long long res=INT_MIN;
    
           for(int i=0;i<nums.size();i++)
           {
             for(int j=i+1;j<nums.size();j++)
             {
    
                for(int k=j+1;k<nums.size();k++)
                {
                      long long temp = (long long)(nums[i] - nums[j])* (long long)nums[k];
                      res = max(res,temp);
    
                }
    
    
             }
    
    
           }
    
    
    
           return res>=0?res:0;
    
    
    
        }
    };