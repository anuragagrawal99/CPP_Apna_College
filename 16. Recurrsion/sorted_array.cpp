#include<iostream>
using namespace std;

bool sortedArray(int a[], int n)
{
    if(n==1)
        return true;
    bool restArray = sortedArray(a+1, n-1);

    return (a[0]<a[1] && restArray);
}

int main()
{
    int a[]={1,2,3,4,5,12,7,8,9,10};
    cout<<sortedArray(a,10)<<endl;
    return 0;
}