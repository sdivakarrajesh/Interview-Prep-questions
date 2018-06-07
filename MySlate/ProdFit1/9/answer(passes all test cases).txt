#include<stdio.h>
int main()
{
    long long num1,num2,temp,power=1;
    int count1 =0,count2 =0,flag=0;
    scanf("%lld",&num1);
    scanf("%lld",&num2);
    temp=num1;
    while(temp>0)
    {
        count1++;
        temp/=10;
    }
    temp=num2;
    while(temp>0)
    {
        count2++;
        temp/=10;
        power=power*10;
    }
    power/=10;
    for(long i=0; i<count2; i++)
    {
        num2=(num2%power)*10+(num2/power);
        if(num2==num1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
