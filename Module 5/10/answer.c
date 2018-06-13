#include<stdio.h>
int main() {
    int n,large1=-1000,large2=-1000,large3=-1000;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    for(int i =0;i<n;i++){
        if(arr[i]>large1){
            large3 = large2;
            large2 = large1;
            large1 = arr[i];
        }
        else if(arr[i]>large2){
            large3 = large2;
            large2 = arr[i];
        }
        else if(arr[i]>large3){
            large3 = arr[i];
        }
    }
    printf("%d, %d, %d",large1,large2,large3);
    return 0;
}
