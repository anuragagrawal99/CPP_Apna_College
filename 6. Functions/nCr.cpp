#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i = 2; i<= n; i++)
        fact = fact * i;
    return fact;
    
}

int main()
{
    int n, r, ans;
    cin>>n>>r;
    ans = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ans;
    return 0;
}