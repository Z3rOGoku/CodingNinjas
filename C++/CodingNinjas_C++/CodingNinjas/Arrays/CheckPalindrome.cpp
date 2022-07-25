#include<bits/stdc++.h>

bool checkPalindrome(char str[]) {
    // Write your code here
    int size = strlen(str);
    int s=0;
    int e=size-1;
    
    while(s<e)
    {
        // if(size==1){
        //     return true;
        // }
        if(str[s]!=str[e])
        {
            return false;
        }
       
            s++;
            e--;
        
    }
    
    return true;
}
