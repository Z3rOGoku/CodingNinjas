void pushZerosEnd(int input, int size)
{
    int NotZero=0;
    for (int i = 0; i < size; i++)
    {
        if (input[i]!=0)    
        {
            int tmp= input[i];
            input[i]=input[NotZero];
            input[NotZero]=tmp;
            NotZero++;
        }
        
    }
    
}