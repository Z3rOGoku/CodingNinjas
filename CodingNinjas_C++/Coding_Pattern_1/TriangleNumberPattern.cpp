#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
  
}


