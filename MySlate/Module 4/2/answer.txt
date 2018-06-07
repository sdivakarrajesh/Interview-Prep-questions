#include<stdio.h>
#include<string.h>
int main(){

    int n,value,i=0,remainder=0;
    char ans[20]="";
    scanf("%d",&n);
    while(n>0){
        remainder = n%16;
        if(remainder<10){
            value = remainder+48;
        }
        else{
            value = remainder+55;
        }
        ans[i] = value;
        n=n/16;
        i++;

    }
    for(int j = i-1;j>=0;j--)
        {printf("%c",ans[j]);}
return 0;
}
