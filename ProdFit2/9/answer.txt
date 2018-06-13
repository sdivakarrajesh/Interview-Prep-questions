#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n){
int primes[] = {2,3,5,7};
for(int i=0;i<4;i++){
    if(n==primes[i]) return 1;
}
return 0;
}
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    while(num){
        if(isPrime(num%10))
        {
        sum = sum + (num%10);
        }
        num = num/10;
    }
    printf("%d",sum);
    return 0;
}

