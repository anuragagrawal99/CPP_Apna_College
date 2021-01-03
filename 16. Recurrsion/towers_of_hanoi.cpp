#include<iostream>
using namespace std;

void towersOfHanoi(int n, char src, char dest, char helper)
{
    if(n==0)
        return; //base case

    towersOfHanoi(n-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towersOfHanoi(n-1, helper, dest, src);
}

int main()
{
    towersOfHanoi(3, 'A', 'C', 'B');
    return 0;
}