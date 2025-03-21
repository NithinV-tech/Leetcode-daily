class Solution {
    public:
        vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) 
        {
          
          unordered_map<string,vector<string>>mp;
          unordered_map<string,int>indeg;
           unordered_map<string,int>mp2;
         vector<string>res;
          int n=0;
    
          for(int i=0;i<recipes.size();i++)
          {
               mp[recipes[i]] = ingredients[i];
               n+=1;
               n+=ingredients[i].size();
    
    
          }
    
    
          for(auto it:supplies)
          {
            mp2[it]=1;
          }
          
    
        //   vector<vector<string>>adj(n,vector<string>(n));
          unordered_map<string, vector<string>> adj;
    
    
          for(auto it:mp)
          {
             vector<string>temp = it.second;
    
             for(int i=0;i<temp.size();i++)
             {
    
                adj[temp[i]].push_back(it.first);
                indeg[it.first]++;   
    
             }
    
          }
    
          queue<string>q;
    
          for(auto it:supplies)
          {
             
             q.push(it);
    
          }
    
          while(!q.empty())
          {
            string rec = q.front();
            q.pop();
    
            for(auto it:adj[rec])
            {
                
                indeg[it]--;
                if(indeg[it] == 0)
                {
                q.push(it);
                res.push_back(it);
                }
    
            
    
          }
           
          }
    
    
          return res;
    
    
    
    
    
    
        }
    };