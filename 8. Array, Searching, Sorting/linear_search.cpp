#include<iostream>
using namespace std;

int linear_Search(int a[], int n, int key)
{
    
}
int main()
{
    int n, key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(key == a[i])
        {
            cout<< i;
            break;
        }
    }
    return 0;
}