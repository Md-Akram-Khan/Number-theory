#include<bits/stdc++.h>
using namespace std;
long long gcd1(long long a,long long b)
{
    long long reminder;
    while(b!=0)
    {
        reminder=a%b;
        a=b;
        b=reminder;
    }
    return a;
}
long long gcd2(long long a,long long b)
{
    if(b==0) return a;
    return gcd2(b,a%b);
}
long long lcm(long long a,long long b,long long gcd)
{
    return (a*b)/gcd;
}
int main()
{
    long long a,b,gcd;
    cin>>a>>b;
    cout<<gcd2(a,b)<<endl;
    //cout<<lcm(a,b,gcd2(a,b))<<endl;
}

