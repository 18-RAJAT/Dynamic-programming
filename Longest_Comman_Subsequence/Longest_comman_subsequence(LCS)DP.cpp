#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<"Enter the no of elements:"<<"\n";
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cout<<"Enter the first string:"<<"\n";
        cin>>s1;

        cout<<"Enter the second string:"<<"\n";
        cin>>s2;

        int dp[s1.length()+1][s2.length()+1];
        int n=s1.length();
        int m=s2.length();

        for(int i=0;i<=n;++i)
        {
            for(int j=0;j<=m;++j)
            {
                if(i==0 or j==0){dp[i][j]=0;}
                else
                {
                    if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                    else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        cout<<"LCS is  :"<<dp[n][m]<<"\n";
    }
    return 0;
}
