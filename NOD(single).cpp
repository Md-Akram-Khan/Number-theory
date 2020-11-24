#include<bits/stdc++.h>
using namespace std;
int divisors(long long n)
{
    n=abs(n);//if n is negitive
    int ans=1;
    for(int i=2; i*i<=n; i++)
    {
        int c=0;
        while(n%i==0)
        {
            n/=i;
            c++;
        }
        ans*=(c+1);
    }
    if(n>1)
        ans*=2;
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
        cout<<divisors(n)<<endl;
    }
    return 0;
}



