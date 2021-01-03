#include<iostream>
using namespace std;

void prime_factor(int n)
{
    int spf[n+1]={0};
    for(int i=2; i<=n; i++)
        spf[i]=i;

    for(int i=2; i<=n; i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i; j<=n; j=j+i)
            {
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
    }

    while(n != 1)
    {
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
}

int main()
{
    prime_factor(42);
    return 0;
}