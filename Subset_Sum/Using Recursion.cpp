#include<bits/stdc++.h>
using namespace std;

bool ss(int* s,int n,int w)
{
    if(w==0){return true;}
    if(n==0){return false;}

    if(w<s[n-1]){return ss(s,n-1,w);}
    else{return ss(s,n-1,w) or ss(s,n-1,w-s[n-1]);}
}
 int main()
 {
     int n;
      cin>>n;
      
      int a[n];
      
        for(long i=0;i<n;i++)
      {
         cin>>a[i]; 
      }
      
        int sum;
        cin>>sum;
        
          ss(a,n,sum);
 }