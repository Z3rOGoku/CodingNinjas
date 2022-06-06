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
        ch = cin.get();

        if ('a'<=ch<='z'|| 'A'<=ch<='Z')
        {
            alpha++;
        }
        else if ('0'<=ch<='9')
        {
            number++;
        }
        else if (ch==' '|| ch=='\t')
        {
            space++;
        }
        


    }

    cout<<alpha<<" "<<number<<" "<<space;
}