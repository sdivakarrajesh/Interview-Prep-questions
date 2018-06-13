#include<stdio.h>
int main()
{
    int rowCount,columnCount;
    scanf("%d %d",&rowCount,&columnCount);
    int arr[rowCount][columnCount];
    for(int i=0;i<rowCount;i++){
        for(int j=0;j<columnCount;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<rowCount;i++){
        for(int j=0;j<columnCount;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
