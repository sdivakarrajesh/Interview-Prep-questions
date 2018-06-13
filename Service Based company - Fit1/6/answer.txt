#include<stdio.h>
int main()
{
    int rows;
    scanf("%d", &rows);
    int rowInstance,fromSecondElement,n=0;
    for(rowInstance = 1; rowInstance <= rows; rowInstance++)
    {
        n++;
        printf("%d", n);
        for(fromSecondElement = 1; fromSecondElement < rowInstance; fromSecondElement++)
        {
            n++;
            printf("*%d", n);
        }
        printf("\n");
    }
    for(rowInstance = rows; rowInstance >= 1; rowInstance--)
    {
        n = n - rowInstance + 1;
        printf("%d", n);
        for(fromSecondElement = 1; fromSecondElement < rowInstance; fromSecondElement++)
        {
            n++;
            printf("*%d", n);
        }
        printf("\n");
        n = n - rowInstance;
    }
    return 0;
}
