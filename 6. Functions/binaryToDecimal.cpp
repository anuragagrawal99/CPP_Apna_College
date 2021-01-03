#include<iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int ans, x=1, y, sum = 0;
    while(n>0)
    {
        y = n%10;
        ans = x*y;
        x = x * 2;
        n = n/10;
        sum = sum + ans;
    }
    return sum;
}

int main()
{
    int bin;
    cin>>bin;
    cout<<binaryToDecimal(bin)<<endl;
    return 0;
}