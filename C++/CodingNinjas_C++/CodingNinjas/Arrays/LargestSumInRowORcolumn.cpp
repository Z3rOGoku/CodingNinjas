#include <climits>
void findLargest(int **input, int nRows, int mCols)
{
    bool isRow = true;
    int largestSum = INT_MIN;
    int num = 0;
    for (int i = 0; i < nRows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < mCols; j++)
        {
            rowSum += input[i][j];
        }
        if (rowSum > largestSum)
        {
            largestSum = rowSum;
            num = i;
        }
    }
    for (int j = 0; j < mCols; j++)
    {
        int colSum = 0;
        for (int i = 0; i < nRows; i++)
        {
            colSum += input[i][j];
        }
        if (colSum > largestSum)
        {
            largestSum = colSum;
            num = j;
            isRow = false;
        }
    }
    if (isRow)
    {
        cout << "row"
             << " " << num << " " << largestSum;
    }
    else
    {
        cout << "column"
             << " " << num << " " << largestSum;
    }
}