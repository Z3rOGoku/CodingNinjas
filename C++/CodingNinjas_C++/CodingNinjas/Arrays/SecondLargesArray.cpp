#include<bits/stdc++.h>
int findSecondLargest(int *input, int n)
{
    //Write your code here
   
    int mx=INT_MIN;
    int Smax=INT_MIN;

   
    for (int i = 0; i < n; i++)
    {
       int ele=input[i];
        if (ele>mx)
        {
            Smax=mx;
            mx=ele;

        }
       
        else if (ele>Smax && ele<mx)
        {
            Smax=ele;
        }
        
    }
    
    return Smax;
        
    
}