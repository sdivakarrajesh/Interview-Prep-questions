#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=0,rev=0,num,firstDigit,secondDigit,ans=0,trailingZeros=0,stopCounting=0;
    scanf("%d",&n);
    num =n;
    while(num){
        num = num/10;
        count++;
    }
    num = n;
    while(num){
        rev = (rev*10) + (num%10);
		if(num%10!=0) stopCounting=1;
        if(stopCounting==0 && num%10==0){trailingZeros++;}
        num = num/10;
    }
    secondDigit = ((rev/10)%10);
    firstDigit = rev%10;
    if(count%2==0){
        while(rev){
			ans = (ans*100) + (rev%100);
			rev = rev/100;
        }

    }
    else{
        while(rev/10){
            ans = (ans*100) + (rev%100);
            rev = rev/100;
        }
        ans = (ans*10) + (n%10);

    }
    if(secondDigit==0 && count%2!=0){printf("%d",rev);}
    else printf("%d",ans);
    if(trailingZeros)
    {
    for(int i=1;i<trailingZeros;i++)
        printf("0");
    }

  return 0;
}
