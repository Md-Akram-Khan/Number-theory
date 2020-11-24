#include<bits/stdc++.h>
using namespace std;
#define max 100000000000
//it is better then other
bool is_prime3(long long n)
{
    if(n<2)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    int limit=sqrt(n);
    for(int i=3; i<=limit; i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        if(is_prime3(n)==true)
            cout<<n<<" is a prime number."<<endl;
        else
            cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}
