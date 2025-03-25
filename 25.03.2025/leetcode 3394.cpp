class Solution {
    public:
       vector<vector<int>> solve(vector<vector<int>>&rectangles)
       {
         
         sort(rectangles.begin(),rectangles.end());
    
         vector<vector<int>>res;
         res.push_back(rectangles[0]);
    
         for(int i=1;i<rectangles.size();i++)
         {
    
           if(res.back()[1] <= rectangles[i][0])
           res.push_back(rectangles[i]);
           else
           {
              res.back()[0] = min(res.back()[0],rectangles[i][0]);
              res.back()[1] = max(res.back()[1],rectangles[i][1]);
    
           }  
    
         }
    
           return res;
     
       }
    
        bool checkValidCuts(int n, vector<vector<int>>& rectangles) 
        {
    
          vector<vector<int>>x;
          vector<vector<int>>y;
    
          for(int i=0;i<rectangles.size();i++)
          {
              x.push_back({rectangles[i][0],rectangles[i][2]});
              y.push_back({rectangles[i][1],rectangles[i][3]});
    
          }
    
          x = solve(x);
          y = solve(y);
    
        //   for(auto it:x)
        //   {
        //     cout<<it[0]<<" "<<it[1]<<"\n";
        //   }
    
        //    for(auto it:y)
        //   {
        //     cout<<it[0]<<" "<<it[1]<<"\n";
        //   }
    
          if(x.size()>=3 || y.size()>=3)
          return 1;
          return 0;
    
        }
    };