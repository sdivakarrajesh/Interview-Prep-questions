#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],index[n],ans[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        scanf("%d",&index[i]);
    }
    for(int position =0;position<n;position++){
        for(int i =0;i<n;i++){
            if(index[i]==position){
                printf("%d\t",arr[i]);
            }
        }
    }
    printf("\n");
    for(int i =0;i<n;i++)printf("%d\t",i);
    return 0;
}
