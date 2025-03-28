class Solution {
    public:
        int minOperations(vector<vector<int>>& grid, int x) 
        {
          
          vector<int>vec;
    
          for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                 vec.push_back(grid[i][j]);
    
    
          sort(vec.begin(),vec.end());
          int t = vec[vec.size()/2];
          int res=0;
    
          for(int i=0;i<vec.size();i++)
          {
              if(t%x != vec[i]%x)
              return -1;
              res+=abs(t-vec[i])/x;
          }
    
          return res;
    
        }
    };