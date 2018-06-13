#include<stdio.h>
int main()
{
    int rows=0,columns=0,first1,maxRow=0;
    scanf("%d%d",&rows,&columns);
    int mat[rows][columns];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    first1 = columns;
    for(int i=0; i<rows; i++)
    {
        int found1=0;
        for(int j=0; j<columns; j++)
        {
            if(mat[i][j]==1 && j<first1)
            {
                first1 =j;
                maxRow = i;
                found1 = 1;
            }
            if(found1==1)
                break;
        }
    }
    printf("%d",maxRow);
    return 0;
}

