#include<stdio.h>
void swap(int *num1,int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return;
}
int main() {
    int n;
    scanf("%d",&n);
    int first,second,third,fourth;
    for(int i=0;i<n;i++){
       scanf("%d",&first);
       scanf("%d",&second);
       scanf("%d",&third);
       scanf("%d",&fourth);
       if(first>second) swap(&first,&second);
       if(third>fourth) swap(&third,&fourth);
       if(first>third) swap(&first,&third);
       if(second>fourth) swap(&second,&fourth);
       if(second>third) swap(&second,&third);
       printf("%d < %d < %d < %d\n",first,second,third,fourth);
   }
    return 0;
}
