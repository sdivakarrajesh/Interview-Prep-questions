#include <stdio.h>
int factorial(int n)
{
if(n<=1) return 1;
else return n*factorial(n-1);
}
int main() {
  int num,check=0,numCopy;
  scanf("%d",&num);
  numCopy = num;
  while(num)
  {
      check= check+ factorial(num%10);
      num = num/10;
  }

    (numCopy==check)?printf("STRONG"):printf("NOT STRONG");
    return 0;
}
