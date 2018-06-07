#include<stdio.h>
int main()
{
    int n,unknown,found=0;
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    scanf("%d",&unknown);
    int i = 0;
    int j = n-1;
    while(i<n && j>=0){
        if(mat[i][j]==unknown){
            found = 1;
            printf("%d,%d",i,j);
            return 0;
        }
        else if(mat[i][j]>unknown) j--;
        else i++; // mat[i][j]<x
    }
    if(found==0)printf("Not Found");
    return 0;
}
