#include<stdio.h>
#include<math.h>
int isPrime(long long int n){
for(int i=2;i<sqrt(n);i++){
    if(n%i==0)return 0;
}
return 1;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        long long int num,checkAgain=0;
        scanf("%lld",&num);
        if(isPrime(num)){
            printf("PRIME\n");
        }
        else{
            printf("NOT PRIME\n");
        }
    }
    return 0;
}
