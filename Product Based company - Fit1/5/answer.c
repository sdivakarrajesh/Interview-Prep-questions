#include<stdio.h>
int main()
{
    long long int num1,num2;
    scanf("%lld",&num1);
    scanf("%lld",&num2);
    long long int num1rev=0,num2rev=0;
    while(num1){
        num1rev = (num1rev*10) + (num1%10);
        num1 = num1/10;
    }
    while(num2){
        num2rev = (num2rev*10) + (num2%10);
        num2 = num2/10;
    }
    long long sum = num1rev+num2rev,sumrev=0;
    int leadingZeros =0,stopCounting=0;
    while(sum){
        if(stopCounting==0 && sum%10==0) leadingZeros++;
        if(sum%10!=0)stopCounting=1;
        sumrev = (sumrev *10) + (sum%10);
        sum = sum/10;
    }
    for(int i=1;i<=leadingZeros;i++)printf("0");
    printf("%lld",sumrev);
    return 0;
}

