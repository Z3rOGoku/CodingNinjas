#include<bits/stdtr1c++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int x=8;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            cout<<i;
            break;
        }
        else if(i==n-1)
        {
            cout<<"-1";
        }
    }
}