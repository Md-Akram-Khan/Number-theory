#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max_a 2147483647
#define max_b 2147483647
#define max_m 46340
ll bigmod(int a,int b,int m)//(a^b)%m
{
    if(b==0)return 1%m;
    ll p=bigmod(a,b/2,m);
    p=(p*p)%m;
    if(b%2==1)p=p*a%m;
    return p;
}
ll bigmod2(int a,int b,int m)
{
    ll result=1;
    a=a%m;
    while(b>0)
    {
        if(b%2==1) result=(result*a)%m;
        a=(a*a)%m;
        b/=2;
    }
    return result;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<bigmod(a,b,c)<<endl;
    }
}
