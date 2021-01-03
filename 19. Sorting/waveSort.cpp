#include<iostream>
using namespace std;

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void waveSort(int a[], int n)
{
    for(int i=1; i<n; i+=2)
    {
        if(a[i]>a[i-1])
            swap(a,i,i-1);
        if(a[i]>a[i+1])
            swap(a,i,i+1);
    }
}

int main()
{
    int a[]={1,2,3,9,8,7,4,5,6,10};
    waveSort(a,10);
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}