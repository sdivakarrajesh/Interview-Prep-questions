#include<stdio.h>
#include<math.h>
int times(int n){
int num=1;
for(int i=1;i<=n;i++){
    num = num*2;
    if(num==n) return i;
}
return 0;
}
int raise(int n,int times)
{
int ans = 1;
for(int i=1;i<=times;i++)
    ans=ans*n;
return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    arr[0] = 0;
    int size =1,prev=1,power;
    while(size<=n){
        int i,j;
        for(i=0;i<prev&&(size+i)<=n;i++){
            power = raise(10,times(prev));
            arr[size+i] = (3*power) + arr[size-prev+i] ;}
        for(j=0;j<prev&& (size+prev+j)<=n;j++){
            power =  raise(10,times(prev));
            arr[size+prev+j] =(4*power)+ arr[size-prev+j];
        }
        prev = prev*2;
        size = size+prev;

    }
    printf("%d",arr[n]);

    return 0;
}

