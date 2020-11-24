#include<bits/stdc++.h>
using namespace std;
#define max 100000000
void sieve_of_eratosthenes(long n)
{
    vector<long>prime;
    bool mark[n+1];
    long limit = sqrt(n);
    mark[1]=true;
    prime.push_back(2);
    for(long i=4; i<=n; i+=2)
        mark[i]=true;
    for(long i=3; i<=n; i+=2)
    {
        if(mark[i]!=true)
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(long j=i*i; j<=n; j+=i*2)
                    mark[j]=true;
            }
        }
    }
    for(int i=0; i<prime.size(); i++)
        cout<<prime[i]<<" ";
    //cout<<prime.size();
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    sieve_of_eratosthenes(n);
}

