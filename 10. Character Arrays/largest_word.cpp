#include<iostream>
using namespace std;

int main()
{
    char a[100] = "anurag";
    int n;
    cin>>n;
    cin.ignore();
    cin.getline(a, n);
    cin.ignore();

    int i=0;
    int maxSt = 0, st=0;
    int maxLength = 0, length = 0;
    while(i<n)
    {
        if(a[i] == ' ' || a[i] == '\0')
        {
            if(length > maxLength)
            {
                maxLength = length;
                maxSt = st;
            }
            st = i+1;
            length = 0;
        }
        else{
            length++;
        }
        
        if(a[i] == '\0')
            break;
        i++;
    }
    cout<<maxLength<<endl;
    for(int i=0; i<maxLength; i++)
        cout<<a[maxSt+i];
    cout<<endl;
    return 0;
}