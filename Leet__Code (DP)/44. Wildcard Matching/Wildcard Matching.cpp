class Solution {
public:
    bool isMatch(string s, string p) {
        
        int m = s.length();
        int n = p.length();
        
        int i = 0;
        int j = 0;
        int asterisk = -1;
        int match;
        
        while(i < m)
        {
            if(j < n and p[j] == '*')
            {
                match = i;
                asterisk = j++;
            }
            
            else if(j < n and (s[i] == p[j] or p[j] == '?' ))
                    
                    {
                        i++;
                        j++;
                    }
            else if(asterisk >= 0)
                    
                    {
                        i = ++match;
                        j = asterisk + 1;
                    }
                    
                    else 
                    {
                        return false;
                    }
          }
                    
                    while(j < n and p[j] == '*')
                    {
                        j++;
                    }
                  
                    return j == n;
    }
};