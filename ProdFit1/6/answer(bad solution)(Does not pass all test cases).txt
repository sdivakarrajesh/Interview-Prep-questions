#include<stdio.h>
int main()
{
    long long int num;
    scanf("%lld",&num);
    long long int numCopy = num;
    int min,digit,minDigit=0;
    while(numCopy){
        digit = numCopy %10;
        if(digit>=1&&digit<min){ minDigit = digit; min  = digit;}
        numCopy = numCopy/10;
    }
    numCopy = num;
    while(numCopy){
        digit = numCopy%10;
        if(digit==0) min = min*10 + digit;
        numCopy = numCopy/10;
    }
    for(int i=minDigit+1;i<10;i++){
        numCopy  = num;
        while(numCopy){
            digit = numCopy %10;
            if(digit==i)
            {min = min *10 + digit;i++;}
            numCopy = numCopy/10;
        }
    }
    printf("%d",min);

    return 0;
}

