#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s = "AnuragAgrawal";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32; 
    }
    cout<<s<<endl;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    cout<<s<<endl;
    sort(s.begin(), s.end());
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    return 0;
}