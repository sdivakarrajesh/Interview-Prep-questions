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
}//This program runs for O(no.of digits * 9 times)
//if arrays allowed-> can be done in O(no.of.Digits)
//even better is hashmap is used
