#include<iostream>
using namespace std;

int main()
{
    int n,a=0,b=1, sum = 0;
    cin>>n;
    if(n==1)
        cout<<"0 "<<endl;
    else if(n==2)
        cout<<"0 1 "<<endl;
    else
    {
        for(int i=3;i<=n;i++)
        {
            sum = a+b;
            cout<<sum<<" ";
            a = b;
            b = sum;
        }
        cout<<endl;
    }
    
    return 0;
}