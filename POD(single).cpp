#include<bits/stdc++.h>
using namespace std;
unsigned long long POD(long long n)
{
    long long m=n;
    long long ans=1;
    for(long long i=2; i*i<=m; i++)
    {
        long long c=0;
        while(m%i==0)
        {
            m/=i;
            c++;
        }
        ans*=(c+1);
    }
    if(m>1)
        ans*=2;
    if(ans%2==1)
    {
        long long p=sqrt(n);
        return pow(n,ans/2)*p;
    }
    else
        return pow(n,ans/2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<POD(n)<<endl;
    }
    return 0;
}




