#include<stdio.h>
int findGCD(int n1, int n2){
if(n1<n2){int temp=n1;n1=n2;n2=temp;}
while(n1%n2!=0){
    int tempn1=n1;
    n1=n2;
    n2 = tempn1%n2;
}
return n2;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int size;
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        int gcd;
        if(size==1)gcd = arr[0];
        if(size>=2){gcd = findGCD(arr[0],arr[1]);}
        for(int i=2;i<size;i++){
                gcd = findGCD(gcd,arr[i]);
        }
        printf("%d\n",gcd);
    }
    return 0;
}
