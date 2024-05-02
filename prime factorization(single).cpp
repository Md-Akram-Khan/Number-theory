#include<bits/stdc++.h>
using namespace std;
vector<int>a;
void primefactorizatiion(int n)
{
    int limit = sqrt(n + 1);
    for(int i=2; i<=limit; i++)
    {
        while(n%i==0)
        {
            a.push_back(i);
            n/=i;
        }
    }
    if(n>1)
        a.push_back(n);
}
int main()
{
    int n;
    cin>>n;
    primefactorizatiion(n);
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}


