#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}
int main()
{
    int num,found=0;
    scanf("%d",&num);
    int i,j = num-2;//we start from 2
    for(i=2;i<j;i++){
        if(isPrime(i)&&isPrime(j)&&(i+j)==num) {
            found =1;
            break;}
        else j--;
    }
    if(found)printf("%d %d",i,j);
    return 0;
}

