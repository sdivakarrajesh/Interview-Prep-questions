#include<stdio.h>
#include<stdbool.h>
int rev(int n){
int rev = 0;
while(n){
    rev = (rev*10) + n%10;
    n = n/10;
}
return rev;
}

bool isPalindrome(int n){
    return n==rev(n);
}

int main()
{
    int num,yes=0;
    scanf("%d",&num);
    for(int count=0;count<5;count++){
        num = num + rev(num);
        if(isPalindrome(num)){yes=1;break;}
    }
    if(yes)printf("%d",num);
    else printf("-1");
    return 0;
}

