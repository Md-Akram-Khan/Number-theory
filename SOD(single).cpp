#include<bits/stdc++.h>
using namespace std;
int SOD(long long n)
{
    long long ans=1;
    for(int i=2; i*i<=n; i++)
    {
        int c=0;
        while(n%i==0)
        {
            n/=i;
            c++;
        }
       ans*=(pow(i,c+1)-1)/(i-1);
    }
    if(n>1)
        ans*=(pow(n,2)-1)/(n-1);
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




