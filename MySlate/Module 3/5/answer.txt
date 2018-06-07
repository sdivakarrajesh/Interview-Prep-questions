#include<stdio.h>
#include<math.h>
int main()
{
    int num = 0,maxPrime=1;;
    scanf("%d",&num);
    for(int i=2;i<=sqrt(num);i++){
        while(num%i==0){
            maxPrime = i;
            num = num/i;
        }
    }
    if(num>2){maxPrime = num;}
    printf("%d",maxPrime);
    return 0;
}
