#include<stdio.h>
int main()
{
    int num,numCopy;
    scanf("%d",&num);
    numCopy = num;
    for(int i=0;i<=9;i++){
            num = numCopy;
            int count =0;
        while(num){
            if(num%10==i){
                count++;
            }
            num=num/10;
        }
        printf("Frequency of %d = %d\n",i,count);
    }

    return 0;
}
