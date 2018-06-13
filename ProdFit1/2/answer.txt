#include<stdio.h>
int raise(int num,int power){
int ans =1;
for(int i=1;i<=power;i++)
        ans = ans *num;
return ans;
}
int findDec(int num,int power){
if(num==0){
    return 0;
}
else{
    return ((num%10) * raise(2,power) + findDec((num/10),power+1));
}
}
int main()
{
  int num;
  scanf("%d",&num);
  printf("%d",findDec(num,0));
}

