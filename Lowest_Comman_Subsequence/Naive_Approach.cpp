#include<bits/stdc++.h>
using namespace std;

int getLcs(string s1,string s2,int n,int m)
{
    if(n==0 or m==0){return 0;}
    if(s1[n-1]==s2[m-1])
    {
        return getLcs(s1,s2,n-1,m-1)+1;
    }
    else
    {
        return max(getLcs(s1,s2,n-1,m),getLcs(s1,s2,n,m-1));
    }
}

int getLengthOfLcs(string s1,string s2)
{
    int n=s1.length();
    int m=s2.length();

    return getLcs(s1,s2,n,m);
}