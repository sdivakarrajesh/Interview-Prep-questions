#include<stdio.h>
void swap(int *n1,int *n2){
int temp=*n1;
*n1=*n2;
*n2=temp;
return;
}
int main() {
    int n,max=0,secondMax=0,test;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&test);
        if(test>max) {swap(&max,&secondMax);max = test;}
        if(test<max&&test>secondMax) secondMax = test;
    }
    printf("%d",secondMax);
    return 0;
}
