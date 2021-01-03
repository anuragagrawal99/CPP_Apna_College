//  Armstrong Number is a Number which is equal to sum of its individual cubes.
// Examples 0, 1, 153, 370, 371, 407

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int rem, sum = 0;
    int org_num = n;
    while(n>0)
    {
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    if(org_num == sum)
        cout<<"Armstrong."<<endl;
    else
    {
        cout<<"Not an armstrong."<<endl;
    }
    
    return 0;
}