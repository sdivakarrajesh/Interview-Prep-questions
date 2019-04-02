#include<stdio.h>
#include<math.h>
int main()
{
    int num = 0,uniquePrime=1,count=0;
    scanf("%d",&num);
	int numCopy = num;
    for(int i=2;i<=sqrt(num);i++){
        while(num%i==0){
            num = num/i;
            if(num%i!=0){uniquePrime=i; count++;}
        }
    }
    if(num>1&&num!=numCopy){uniquePrime = num;printf("%d",count+1);}//if the element not removed is greater than 1 then that is a prime number too. So include that.
    else printf("%d",count);
    return 0;
}
//just the different prime numbers that are factor of n
