#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/int n;
    cin >>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
            
            
        }
        for (int k = 0; k < i+1; k++)
        {
            cout<<k+1;
        }
        
        cout<<endl;
    }
  
}


