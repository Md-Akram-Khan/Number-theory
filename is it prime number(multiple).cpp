//prime=false
#include<bits/stdc++.h>
using namespace std;

#define max 100000000

int n=100000000;
bool mark[100000001];

void is_it_prime()
{
    //marking both prime and non-prime
    mark[0]=mark[1]=true;
    mark[2]=false;
    int limit = sqrt(n);
    for(long long i=4; i<=n; i+=2)
        mark[i]=true;
    for(long long i=3; i<=n; i+=2)
    {
        if(mark[i]!=true)
        {
            mark[i]=false;
            if(i<=limit)
            {
                for(long j=i*i; j<=n; j+=i*2)
                    mark[j]=true;
            }
        }
    }
}
//it is better than first
void is_it_prime1()
{
    //marking only non-prime
    mark[0]=mark[1]=true;
    int limit=sqrt(n);
    for(int i=2; i<=limit; i++)
    {
        if(mark[i]!=true)
        {
            for(int j=i*i; j<=n; j+=i)
                mark[j]=true;
        }
    }
}
int main()
{
    is_it_prime1();
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(mark[a]==true || a<0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

