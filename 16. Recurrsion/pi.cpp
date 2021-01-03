#include<iostream>
using namespace std;

void pi(string p)
{
    if(p.length()==0)
        return;
    if(p[0] == 'p' && p[1] == 'i')
    {
        cout<<"3.14";
        pi(p.substr(2));
    }else
    {
        cout<<p[0];
        pi(p.substr(1));
    }
}

int main()
{
    pi("pixyxpixyzpi");
    return 0;
}