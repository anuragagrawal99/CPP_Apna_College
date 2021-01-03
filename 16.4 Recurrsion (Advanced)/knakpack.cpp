#include<iostream>
using namespace std;

int knakpack(int value[], int wt[], int n, int W)
{
    if(n==0)
        return 0;
    if(wt[n-1]>W)
        return knakpack(value, wt, n-1, W);
    return max(knakpack(value, wt, n-1, W-wt[n-1])+value[n-1], knakpack(value, wt, n-1, W));
}

int main()
{
    int value[]={100,50,150};
    int wt[]={10,20,19};
    cout<<knakpack(value, wt, 3, 30);
    return 0;
}