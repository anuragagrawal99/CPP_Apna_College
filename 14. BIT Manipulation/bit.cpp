#include<iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1<<pos)) != 0);
    // If we will not write != 0 , then it will show the decimal value
    // Check it once by yourself
}

int setBit(int n, int pos)
{
    return (n | (1 <<pos));
}

int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}

int updateBit(int n, int pos, int value)
{
    int mask = ~(1<<pos);
    n = n & mask;

    return (n | (value<<pos));
}

int toggleBit(int n, int pos)
{
    return (n xor (1<<pos));
}
int main()
{
    // cout<<getBit(5,2);
    // cout<<setBit(5, 0);
    // cout<<clearBit(5, 0);
    // cout<<updateBit(5, 1, 1);
    cout<<toggleBit(5,0);
    return 0;
}