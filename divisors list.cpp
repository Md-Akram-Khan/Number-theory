#include<bits/stdc++.h>
using namespace std;
#define max 172500
int n=100;
vector<int>divisors[101];
void Divisors_Generator()
{
    for(int i=1; i<=n; i++)
        for(int j=i; j<=n; j+=i)
            divisors[j].push_back(i);
}
int main()
{
    Divisors_Generator();
    vector<int>::iterator it;
    for(int i=1; i<=n; i++)
    {
        cout<<"Number of "<<i<<"'s Divisors:"<<divisors[i].size()<<endl;

        cout<<"They are : ";
        for(it=divisors[i].begin(); it!=divisors[i].end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;

        cout<<"Sum of the divisors : ";
        cout<<accumulate(divisors[i].begin(),divisors[i].end(),0)<<endl<<endl;
    }
}

