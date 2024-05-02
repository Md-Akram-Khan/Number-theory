#include<bits/stdc++.h>
using namespace std;
long long SOD(long long n)
{
    long long ans=1;
    for(long long i=2; i*i<=n; i++)
    {
        int c=0;
        while(n%i==0)
        {
            n/=i;
            c++;
        }
       long long sum = 1, p = 1;
       for(int j = 1; j <= c; j++)
       {
           p *= i;
           sum += p;
       }
       ans *= sum;
    }
    if(n>1)
        ans*=(1+n);
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<SOD(n)<<endl;
    }
    return 0;
}



