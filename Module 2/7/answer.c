#include<stdio.h>
void swap(int *num1,int *num2)
{
int temp;
temp = *num1;
*num1 = *num2;
*num2 = temp;
return;
}
int main() {
    int n;
    scanf("%d",&n);
    int first[n],second[n],third[n],fourth[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&first[i]);
    scanf("%d",&second[i]);
    scanf("%d",&third[i]);
    scanf("%d",&fourth[i]);
    }
   for(int i=0;i<n;i++)
   {
       if(first[i]>second[i]) swap(&first[i],&second[i]);
       if(third[i]>fourth[i]) swap(&third[i],&fourth[i]);
       if(first[i]>third[i]) swap(&first[i],&third[i]);
       if(second[i]>fourth[i]) swap(&second[i],&fourth[i]);
       if(second[i]>third[i]) swap(&second[i],&third[i]);
       printf("%d < %d < %d < %d\n",first[i],second[i],third[i],fourth[i]);
   }
    return 0;
}
