#include<iostream>

using namespace std;

int main()
{
    char ch;
    ch=cin.get();

    int alpha=0;
    int space=0;
    int number=0;

    while(ch!='$')
    {
        

        if ('a'<= ch && ch<='z')
        {
            alpha++;
        }
        else if ('0'<=ch && ch<='9')
        {
            number++;
        }
        else if (ch==' '|| ch=='\t' || ch=='\n')
        {
            space++;
        }
        ch = cin.get();


    }

    cout<<alpha<<" "<<number<<" "<<space;
}