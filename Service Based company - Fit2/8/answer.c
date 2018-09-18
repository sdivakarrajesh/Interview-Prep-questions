#include<stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int arr[m][n],ans[n][m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            ans[i][j] = arr[j][i];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
