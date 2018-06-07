#include<stdio.h>
void swap(int *n1,int *n2){
int temp = *n1;
*n1= *n2;
*n2 = temp;
return;
}
int sortPartition(int arr[],int low,int high){
int pivot = arr[high];
int i=low;
for(int j=low;j<high;j++){
    if(arr[j]>=pivot){
        swap(&arr[i],&arr[j]);
        i++;
    }
}
swap(&arr[i],&arr[high]);
return i;
}
void quicksort(int arr[],int left, int right){
    if(left<right){

        int pivotIndex = sortPartition(arr, left, right);
        quicksort(arr,left,pivotIndex-1);
        quicksort(arr,pivotIndex+1,right);
    }

return;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    int maxNum = 0;
    for(int i=0;i<n;i++)maxNum = (maxNum*10) + arr[i];
    printf("%d",maxNum);
    return 0;
}

