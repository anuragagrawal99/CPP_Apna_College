#include<iostream>
using namespace std;

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void dnfSort(int a[], int n)
{
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a,mid,low);
            low++; mid++;
        }
        else if(a[mid]==1)
            mid++;
        else
        {
            swap(a,mid,high);
            high--;
        }   
    }
}

int main()
{
    int a[]={2,1,0,2,1,0,2,1,0,0};
    dnfSort(a,10);
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}