class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) 
        {
         
           vector<vector<int>>merged;
           sort(meetings.begin(),meetings.end());
           int ctr=0;
           merged.push_back(meetings[0]);
           ctr+=(merged[0][0]-1);
    
           for(int i=1;i<meetings.size();i++)
           {
             if(meetings[i][0] > merged.back()[1])
             {
                ctr+=(meetings[i][0] - merged.back()[1]-1);
                merged.push_back(meetings[i]);
                
             }
             else
             {
               if(meetings[i][1] > merged.back()[1]) 
               merged.back()[1] = meetings[i][1];
    
             }
             
           }
    
           ctr+=(days - merged.back()[1]);
    
           return ctr;
      
    
        }
    };