// 0 1 1 2 3 5 8

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int dp[N];

//Top Down Approach

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    // This is Memoise
    if (dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    memset(dp, -1, sizeof(dp));

    int n;
    cout << "Enter the value : " << endl;
    cin >> n;

    //Bottom Up Approach
    
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2;i<n;++i)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << fib(n);
}