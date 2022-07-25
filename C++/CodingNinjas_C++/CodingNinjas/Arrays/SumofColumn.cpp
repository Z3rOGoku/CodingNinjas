#include <iostream>
using namespace std;
int main()
{
    int numRows;
    int numCols;
    cin >> numRows >> numCols;
    int input[numRows][numCols];
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            cin >> input[i][j];
        }
    }
    for (int j = 0; j < numCols; j++)
    {
        int sum = 0;
        for (int i = 0; i < numRows; i++)
        {
            sum += input[i][j];
        }
        cout << sum << " ";
    }
}