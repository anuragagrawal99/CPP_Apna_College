#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int a[10];
    int max_element = INT_MIN;
    int min_element = INT_MAX;

    for(int i=0; i<10;i++)
        cin>>a[i];
    for(int i=0;i<10;i++)
    {
        max_element = max(max_element, a[i]);
        min_element = min(min_element, a[i]);
    }
    cout<<max_element<<endl<<min_element<<endl;
    return 0;
}
