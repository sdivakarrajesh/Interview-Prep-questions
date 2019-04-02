#include<stdio.h>
char str[20]="";
int position =0;
int dec2Hex(int num){
    if(num==0){
        return 0;
    }
    else{
        dec2Hex(num/16);
    }
    if(num%16<10){
        str[position] = num%16 + 48;
        position++;
    }
    else{
        str[position] = num%16 + 55;
        position++;
    }

}
int main(){
    int num;
    scanf("%d",&num);
    dec2Hex(num);
    printf("%s",str);
    return 0;
}