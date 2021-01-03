#include<iostream>
using namespace std;

int merge(int arr[], int l, int mid, int r)
{
    int inv=0;
    int n1 = mid-l+1;
    int n2 = r-(mid+1)+1;
    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++)
        a[i] = arr[l+i];
    for(int i=0; i<n2; i++)
        b[i] = arr[mid+1+i];

    int i=0, j=0, k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            k++; i++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;
            k++; j++;
        }
    }
    while(i<n1)
    {
        arr[k] = a[i];
        k++;    i++;
    }
    while(j<n2)
    {
        arr[k] = b[j];
        k++; j++;
    }
    return inv;
}

int mergeSort(int arr[], int l, int r)
{
    int inv=0;
    if(l<r)
    {
        int mid = (l+r)/2;
        inv += mergeSort(arr,l,mid);
        inv += mergeSort(arr,mid+1,r);
        inv += merge(arr,l,mid,r);
    }
    return inv;
}


int main()
{
    int arr[]={3,6,9,2,4,8,10,1,5,7};
    cout<<mergeSort(arr,0,9)<<endl;
    return 0;
}