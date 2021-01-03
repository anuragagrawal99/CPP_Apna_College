#include<iostream>
using namespace std;

int firstOccurence(int a[], int n, int i, int key)
{
    if(i==n)
        return -1;
    if(a[i]==key)
        return i;
    return firstOccurence(a,n,i+1,key);
}

int lastOccurence(int a[], int n, int i, int key)
{
    if(i==n)
        return -1;
    int restArray = lastOccurence(a,n,i+1,key);
    if(restArray != -1)
        return restArray;
    if(a[i]==key)
        return i;
    return -1;
}

int main()
{
    int a[]={1,2,3,2,1};
    cout<<firstOccurence(a,5,0,2)<<endl;
    cout<<lastOccurence(a,5,0,2)<<endl;
    return 0;
}