#include<stdio.h>
int main(){
    int n,max;
    scanf("%d",&n);
    int num1,num2,num3,num4;
    for(int i =0;i<n;i++){
        scanf("%d %d %d %d",&num1, &num2, &num3, &num4);
        max=0;
        max = num1>num2? num1:num2;
        max = max>num3? max:num3;
        max = max>num4? max:num4;
        printf("Largest of %d, %d, %d, %d is %d\n",num1,num2,num3,num4,max);
    }
    return 0;
}
