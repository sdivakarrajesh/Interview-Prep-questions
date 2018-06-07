#include<stdio.h>
int main()
{
    int rowCount,columnCount,checkElement,i,j,flag=0;
    scanf("%d%d",&rowCount,&columnCount);
    int arr[rowCount][columnCount];
    for(i=0;i<rowCount;i++){
        for(j=0;j<columnCount;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&checkElement);
    for(i=0;i<rowCount;i++){
        for(j=0;j<columnCount;j++){
            if(arr[i][j]==checkElement){flag=1;break;}
        }
        if(flag==1)break;
    }
    if(flag==1)printf("%d %d",i,j);
    else printf("-1 -1");
    return 0;
}
