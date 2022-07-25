

#include <climits>
int arrayRotateCheck(int *input, int n)
{
      int mi=INT_MAX;
      int index=0;
    for(int i=0;i<n;i++){
        if(mi>input[i]){
           mi=input[i];
           index=i;}
    }
    
    return index;
        
}