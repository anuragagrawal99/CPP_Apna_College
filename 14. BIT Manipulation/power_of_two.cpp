#include<iostream>
using namespace std;

int powerOfTwo(int n)
{
    return (n && !(n & n-1));
}

int main()
{
    cout<<powerOfTwo(128)<<endl;
    return 0;
}