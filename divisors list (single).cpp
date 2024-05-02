#include<bits/stdc++.h>
using namespace std;
vector<int>a;
void divisors(int n)
{
    a.push_back(1);
    a.push_back(n);
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            a.push_back(i);
            if(n/i!=i)
                a.push_back(n/i);
        }
    }
    sort(a.begin(), a.end());
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        divisors(n);
        for(int i=0; i<a.size(); i++)
            cout<<a[i]<<' ';
        cout<<endl;
        a.clear();
    }

    return 0;
}


