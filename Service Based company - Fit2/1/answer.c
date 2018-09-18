#include<stdio.h>
void cellCompete(int arr[],int n){
  for(int days=0;days<n;days++){
  int temp=0;
  for(int index=0;index<7;index++){

      if(arr[index+1]==temp)
      {
      temp = arr[index];
      arr[index] = 0;
      }
      else {
          temp = arr[index];
          arr[index] = 1;
      }

  }
  arr[7] = (temp==0)?0:1;
  }
  for(int i=0;i<8;i++)printf("%d ",arr[i]);

}
int main() {
    int n,arr[8];
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    cellCompete(arr,n);
    return 0;
}
