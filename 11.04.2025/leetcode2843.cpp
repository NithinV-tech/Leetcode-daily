class Solution {
    public:
       bool solve(string str)
       {
         int n = str.size();
         if(n%2)
         return 0;
         int s1=0,s2=0;
    
         for(int i=0,j=str.size()-1;i<str.size()/2,j>=str.size()/2;i++,j--)
         {
            s1+=int(str[i]);
            s2+=int(str[j]);
            
         }
    
         if(s1 == s2)
         return 1;
         return 0;
    
    
       }
       
        int countSymmetricIntegers(int low, int high)
        {
          int ctr=0;
          for(int i=low;i<=high;i++)
          {
              int num = i;
              string str = to_string(num);
              ctr+=solve(str);
    
    
          }
    
          return ctr;
    
    
    
        }
    };