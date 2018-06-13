#include<stdio.h>
#include<math.h>
int main()
{
    int num = 0,uniquePrime=1,count=0;
    scanf("%d",&num);
    for(int i=2;i<=sqrt(num);i++){
        uniquePrime=i;
        while(num%i==0){
            num = num/i;
            if(num%i!=0){uniquePrime=i; count++;}
        }
    }
    if(num>2){uniquePrime = num;}
    printf("%d",count+1);//including 1 also
    return 0;
}
