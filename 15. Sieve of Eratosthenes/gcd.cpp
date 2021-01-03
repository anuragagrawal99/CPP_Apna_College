#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    int rem=1;
    while(b != 0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main()
{
    cout<<gcd(40,22)<<endl;
    return 0;
}