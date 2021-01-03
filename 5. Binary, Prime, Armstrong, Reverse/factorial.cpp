#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int fact = 1;
    int i;
    for(i=2;i<=n;i++)
    {
        fact = fact * i;
    }
    cout<<fact;
    return 0;
}