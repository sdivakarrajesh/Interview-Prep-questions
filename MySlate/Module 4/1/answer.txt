#include<stdio.h>
#include<stdlib.h>
int main() {
    long long int n,binary=0,position = 1;
    scanf("%lld",&n);
    if(n<0) {n= abs(n);printf("1");}
    while(n){
        binary = binary + (n%2)*position;
        n = n/2;
        position = position*10;
    }
    printf("%lld",binary);
}
