#include<stdio.h>
int raise(int num,int power){
    int ans=1;
    for(int i=1;i<=power;i++){
        ans = ans*num;
    }
    return ans;
}
int rotateNum(int n,int length){
    length = length-1;

    int firstPart = n/(raise(10,length));
    printf("First Part is %d\n",firstPart);

    int secondPart = (n%(raise(10,length)));
    printf("Second Part is %d\n",secondPart);

    return firstPart + secondPart*10 ;
}
int main(){
    int num1,num2,length=0,numCopy,isCircular=0;
    scanf("%d %d",&num1,&num2);
    numCopy = num1;
    for( length =0;numCopy!=0;length++)numCopy = numCopy/10;

    for(int i=0;i<length;i++){
        num1 = rotateNum(num1,length);
        printf("%d\n",num1);
        if(num1 == num2){
            printf("YES");
            isCircular =1;
            break;
        }

    }
    if(isCircular==0){
        printf("NO");
    }
    return 0;
}
