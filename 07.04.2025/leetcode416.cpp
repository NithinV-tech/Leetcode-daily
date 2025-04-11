class Solution {
    public:
       bool solve(vector<int>&nums,int target,int ind,vector<vector<int>>&dp)
       {
        if(target == 0)
        return 1;
        if(ind >= nums.size() || target < 0)
        return 0;
    
        if(dp[target][ind] != -1)
        return dp[target][ind];
    
        bool r1 = solve(nums,target - nums[ind],ind+1,dp);
        bool r2 = solve(nums,target,ind+1,dp);
        return dp[target][ind] = (r1 || r2);
        
       }
    
        bool canPartition(vector<int>& nums) 
        {
           int sum = 0;
    
           for(int i=0;i<nums.size();i++)
           sum+=nums[i];
    
           if(sum%2)
           return 0;
           int row = sum/2+1;
           vector<vector<int>>dp(row,vector<int>(nums.size()+1,-1));
    
           return solve(nums,sum/2,0,dp);  
    
    
    
        }
    };