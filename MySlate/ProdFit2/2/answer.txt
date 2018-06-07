#include<stdio.h>
long int raise(long int num, int power){
    long int ans=1;
    for(int i=1;i<=power;i++){
        ans = ans * num;
    }
    return ans;
}

long int findDecimal(long int num,int base){
    long int ans=0;
    int i=0;
    while(num){
        ans = ans + (num%10)*raise(base,i);
        num = num/10;
        i++;
    }
    return ans;
}

long int findBaseEquivalent(long int num,int base){
    long int ans=0;
    long int numCopy = num;
    int digits=0;
    while(numCopy){
        numCopy = numCopy/base;
        digits++;
    }
    int ansArr[digits];
    for(int i=0;i<digits;i++){
        ansArr[i] = num%base;
        num = num/base;
    }
    for(int i=digits-1;i>=0;i--){
        ans = ans*10 + ansArr[i];
    }
    return ans;
}

long int add_any_base(long int num1,long int num2,int base){
    long int ans = findDecimal(num1,base) + findDecimal(num2,base);
    return findBaseEquivalent(ans,base);
}



int main()
{
    long int num1,num2;
    int base;
    scanf("%ld %ld %d",&num1,&num2,&base);
    printf("%ld",add_any_base(num1,num2,base));
    return 0;
}

