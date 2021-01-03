#include<iostream>
using namespace std;

int main()
{
    int n, m, o;
    cin>>n>>m>>o;
    int a[n][m], b[m][o], c[n][o];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < o; j++)
            cin >> b[i][j];

    for(int i=0; i<n; i++)
        for(int j=0; j<o; j++)
            c[i][j] = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<o; j++)
        {
            for(int k=0; k<m; k++)
                c[i][j] += a[i][k]*b[k][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<o; j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}