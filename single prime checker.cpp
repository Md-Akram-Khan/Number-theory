#include<bits/stdc++.h>
using namespace std;
bool primecheck(long long n)
{
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    long long limit = sqrt(n + 1);
    for(int i = 3; i <= limit; i += 2)
        if(n % i == 0) return 0;
    return 1;
}
int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        if(primecheck(n)==true)
            cout<<n<<" is a prime number."<<endl;
        else
            cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}
