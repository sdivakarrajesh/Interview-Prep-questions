#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num1,num2;
    for(int i =0;i<n;i++)
    {
        scanf("%d %d",&num1,&num2);
        num1<num2? printf("%d < %d\n",num1,num2):printf("%d < %d\n",num2,num1);
    }
    return 0;
}
