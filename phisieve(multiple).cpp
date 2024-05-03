#include<bits/stdc++.h>
using namespace std;
int n=100;
int phi[101],mark[101];
void phisieve()
{
    phi[1]=phi[2]=1;
    for(int i=3; i<=n; i++)
        phi[i]=i;
    for(int i=4; i<=n; i+=2)
    {
        mark[i]=1;
        phi[i]=phi[i]/2;
    }
    for(int i=3; i<=n; i+=2)
    {
        if(mark[i]!=1)
        {
            phi[i]=phi[i]-1;
            for(int j=2*i; j<=n; j+=i)
            {
                mark[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}
int main()
{
    phisieve();
    for(int i=1; i<=n; i++)
        cout<<phi[i]<<" ";
}

