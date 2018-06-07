#include<stdio.h>
int max(int a,int b){return (a>b)?a:b;}
int min(int a,int b){return (a<b)?a:b;}
int main()
{
    int row,column;
    scanf("%d%d",&row,&column);
    int mat[row][column];
    for(int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
        scanf("%d",&mat[i][j]);
        }
    }
 for (int line=1; line<=(row + column -1); line++)
    {
         int startColumn =  max(0, line-row);
         int count = min(min(line, (column-startColumn)), row);
         for (int j=0; j<count; j++)
            printf("%d\t", mat[min(row, line)-j-1][startColumn+j]);
         printf("\n");
    }
    return 0;
}
