#include<Stdio.h>
int raise(int num,int power)
{

    int ans=1;
    for(int i=1; i<=power; i++)
    {
        ans = ans*num;
    }
    return ans;
}

int main(){
    int num,numCopy,digitCount=0,digit,odd=0,even=0,option;
    scanf("%d %d",&option,&num);
    numCopy = num;
    for(digitCount=0; numCopy!=0; numCopy=numCopy/10,digitCount++);
    while(num){
        digitCount = digitCount-1;
        digit = num/raise(10,digitCount);
        num = num%raise(10,digitCount);
        if(digit&1){
            odd=odd*10+digit;
        }
        else{
        even=even*10 + digit;
        }
    }
    if(option==0)printf("%d%d",odd,even);
    else printf("%d%d",even,odd);
    return 0;
}
