#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter a number:";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {   
            cout << "It is not a prime number." << endl;
            break;
        }
    }
    if (i == n)
        cout << "Prime Number." << endl;
    return 0;
}