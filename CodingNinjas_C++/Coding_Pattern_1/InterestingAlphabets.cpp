#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	char c = 65+a;
	for(int i=1;i<=a;i++)
        {            
                     c=(char)(c-i);
                     for(int j=0;j<i;j++)
                    {    
                        cout<<c;
                        c++;
                    }   
        cout<<endl;
        }
	
}