#include<iostream>
using namespace std;

bool pair_sum(int a[], int n, int k)
{
    int low=0, high=n-1;

    for(int i=0; i<n; i++)
    {
        if(a[low]+a[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (a[low]+a[high]>k)
            high--;
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    cout<<pair_sum(a,n,k)<<endl;

    return 0;
}