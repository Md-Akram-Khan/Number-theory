#include<bits/stdc++.h>
using namespace std;
int MAXN=10000001;
vector<int>spf(MAXN);//spf = smallest prime factor
void smallest_prime_factor()
{
    for(int i=1; i<MAXN; i++)
        spf[i]=i;
    for(int i=4; i<MAXN; i+=2)
        spf[i]=2;
    int limit=sqrt(MAXN)+1;
    for(int i=3; i<=limit; i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i; j<MAXN; j+=i)
            {
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
    }
}
int primefactorizatiion(int x)
{
    vector<int>ret;
    while(x!=1)
    {
        ret.push_back(spf[x]);
        x=x/spf[x];
    }
    for(int i=0; i<ret.size(); i++)
        cout<<ret[i]<<" ";
    cout<<endl;

}
int main()
{
    smallest_prime_factor();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        primefactorizatiion(n);
    }
    return 0;
}
/*
vector<int>primefactorizatiion(int x)
{
    vector<int>ret;
    while(x!=1)
    {
        ret.push_back(spf[x]);
        x=x/spf[x];
    }
    return ret;
}
int main()
{
    smallest_prime_factor();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>p = primefactorizatiion(n);
        for(int i=0; i<p.size(); i++)
            cout<<p[i]<<" ";
        cout<<endl;
    }
    return 0;
}
*/

