void spiralPrint(int **input, int nRows, int mCols)
{
    if (nRows == 0 || mCols == 0)
    {
        return;
    }

    int i, rowStart = 0, colStart = 0;

    int numElements = nRows * mCols, count = 0;

    while (count < numElements)
    {
        for (i = colStart; count < numElements && i < mCols; ++i)
        {
            cout << input[rowStart][i] << " ";
            count++;
        }
        rowStart++;

        for (i = rowStart; count < numElements && i < nRows; ++i)
        {
            cout << input[i][mCols - 1] << " ";
            count++;
        }
        mCols--;

        for (i = mCols - 1; count < numElements && i >= colStart; --i)
        {
            cout << input[nRows - 1][i] << " ";
            count++;
        }
        nRows--;

        for (i = nRows - 1; count < numElements && i >= rowStart; --i)
        {
            cout << input[i][colStart] << " ";
            count++;
        }
        colStart++;
    }
}