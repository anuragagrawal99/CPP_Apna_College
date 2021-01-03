#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "anurraaaaaaaaaagagraawwaall";
    
    char ans[100];
    ans[0] = s[0];
    int count = 1;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i] != s[i+1])
        {
            ans[count] = s[i];
            count++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
