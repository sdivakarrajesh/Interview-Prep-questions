#include<stdio.h>
void swap(int *n1,int *n2){
int temp = *n1;
*n1=*n2;
*n2 =temp;
return;
}
int sortPartition(int arr[],int low,int high){
int pivot = arr[high];
int i=low;
for(int j=low;j<high;j++){
    if(arr[j]<=pivot){
        swap(&arr[i],&arr[j]);
        i++;
    }
}
swap(&arr[i],&arr[high]);
return (i);

}
void quickSort(int arr[],int low,int high){
if(low<high){
    int pivotIndex = sortPartition(arr,low,high);
    quickSort(arr,low,pivotIndex-1);
    quickSort(arr,pivotIndex+1,high);
}
return; }
int main(){

int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
quickSort(arr,0,n-1);
for(int i=0;i<n;i=i+2)printf("%d ",arr[i]);//print alternate digits
return 0;
}
