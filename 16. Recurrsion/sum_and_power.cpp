#include<iostream>
using namespace std;

int add(int n)
{
    if(n == 0)
        return 0;
    int prevSum = add(n-1);
    return n + prevSum;
}

int power(int n, int p)
{
    if(p==0)
        return 1;
    int prevPower = power(n, p-1);
    return n * prevPower;
}

int main()
{
    cout<<add(5)<<endl;
    cout<<power(2, 3)<<endl;
    return 0;
}
