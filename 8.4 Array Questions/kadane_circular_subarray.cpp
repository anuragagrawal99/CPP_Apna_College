// #include<iostream>
// #include<climits>
// using namespace std;

// int kadane(int a[], int n)
// {
//     int currSum = 0;
//     int maxSum = INT_MIN;
//     for(int i=0; i<n; i++)
//     {
//         currSum += a[i];
//         if(currSum < 0)
//             currSum = 0;
//         maxSum = max(maxSum, currSum);
//     }
//     return maxSum;
// }

// int main()
// {
//     int n;
//     cin>>n;

//     int a[n];
//     cin>>a[n];

//     int nonwrapsum;
//     int wrapsum;

//     nonwrapsum = kadane(a,n);
//     cout<<nonwrapsum<<endl;

//     int totalSum = 0;
//     for(int i=0; i<n; i++)
//     {
//         totalSum = totalSum + a[i];
//         a[i] = -a[i];
//     }

//     wrapsum = totalSum + kadane(a, n);
//     cout<<wrapsum<<endl;
//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += a[i];
        if (currSum < 0)
            currSum = 0;
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(a, n);

    int totalSum = 0;
    for(int i=0; i<n; i++)
    {
        totalSum += a[i];
        a[i] = -a[i];
    }
    wrapsum = totalSum + kadane(a,n);
    cout<<max(wrapsum, nonwrapsum)<<endl;    

    return 0;
}