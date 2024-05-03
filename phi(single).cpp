//ϕ(n) = number of coprime with n upto n
#include<bits/stdc++.h>
using namespace std;
#define max  1000000000000000000
//vector<int>a;
long long phi_single(long long n)
{
    long long phi=n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            phi=(phi/i)*(i-1);
            while(n%i==0)
            {
                //a.push_back(i);
                n/=i;
            }
        }
    }
    if(n>1)
    {
        //a.push_back(n);
        phi=(phi/n)*(n-1);
    }
    return phi;
}
int main()
{
    long long n;
    cin>>n;
    cout<<phi_single(n)<<endl;
    //for(int i=0; i<a.size(); i++)
        //cout<<a[i]<<" ";
    //cout<<endl;
    return 0;
}



