#include<iostream>
using namespace std;
void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    while(start<=end)
    {
        int c;
        
        c=(start-32)*5/9;
        
        cout<<start<<"\t"<<c;
        cout<<endl;
        
        start=start+step;
            
        
        
    }


}
int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}



