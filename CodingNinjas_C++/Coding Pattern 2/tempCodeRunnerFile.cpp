#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */

    int n;
    cin>>n;

    for (int i = 1; i < n; i++)
    {
        if(i%2==0 && i==2)
        {
            cout<<i<<endl;
        }
        else if (i%2!=0)
        {
            cout<<i<<endl;
        }
        
    }
    
  
}