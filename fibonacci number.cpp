/*
    recursive : runtime - o(n), memory - o(n)+o(n)
    iterative : runtime - o(n), memory - o(1)
*/
#include<bits/stdc++.h>
using namespace std;
long long dp[10+1];
long long fibo(int n)
{
    if(n < 2) return n;
    if(dp[n] != 0) return dp[n];
    return dp[n] = fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cin>>n;
    //cout<<fibo(n);
    long long prev2 = 0, prev = 1, cur;
    for(int i = 2; i <= n; i++)
    {
        cur = prev + prev2;
        prev2 = prev;
        prev = cur;
    }
    if(n == 0) cout<<0<<endl;
    else if(n == 1) cout<<1<<endl;
    else cout<<cur<<endl;
}

