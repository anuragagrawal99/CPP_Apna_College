#include<iostream>
using namespace std;

int main()
{
    int n, m, key;
    cin>>n>>m>>key;

    int a[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];
    
    bool found = false;
    int r=0, c=n-1;
    while(r<m && c >= 0)
    {
        if(a[r][c] == key)
        {
            found = true;
            cout<<r<<" "<<c<<endl;
        }
        a[r][c] > key ? c-- : r++;
    }

    found ? cout<<"Found" : cout<<"Not Found"; 
    return 0;
}