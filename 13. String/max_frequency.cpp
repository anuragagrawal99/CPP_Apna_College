#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="anuragagrawal";
    int a[26];

    for(int i=0; i<26; i++)
        a[i]=0;
    
    for(int i=0; i<s.length(); i++)
    {
        a[s[i]-'a']++;
    }
    
    char ans;
    int maxfreq = -1;

    for(int i=0; i<26; i++)
    {
        if(maxfreq < a[i])
        {
            maxfreq = max(a[i], maxfreq);
            ans = 'a' + i;
        }
    }
    cout<<ans<<" "<<maxfreq<<endl;
    return 0;
}