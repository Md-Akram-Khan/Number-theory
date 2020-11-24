#include<bits/stdc++.h>
using namespace std;
//not so good.
bool is_prime1(int n)
{
    if(n<2) return false;
    for(int i = 2; i < n; i++)
        if(n % i == 0) return false;
    return true;
}
//it is better then first
bool is_prime2(int n)
{
    if (n < 2)
        return false;
    if(n == 2)
        return true;
    if(n % 2 == 0)
        return false;
    for(int i = 3; i <= n / 2; i += 2)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(is_prime2(n)==true)
            cout<<n<<" is a prime number."<<endl;
        else
            cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}
