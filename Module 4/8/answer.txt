#include<stdio.h>
#include<math.h>
void swap(int *n1,int *n2){
int temp=*n1;
*n1=*n2;
*n2=temp;
return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int power=1,firstDigit1=0,firstDigit2=0,count1=0,count2=0;
            while(arr[i]/power){count1++;power = power*10;}
            power=1;
            while(arr[j]/power){count2++;power = power*10;}
            do{
            firstDigit1 = arr[i]/pow(10,count1-1);
            firstDigit2 = arr[j]/pow(10,count2-1);
            count1--;
            count2--;
            }while(firstDigit1==firstDigit2);


            if(firstDigit1<firstDigit2){
                swap(&arr[i],&arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
return 0;
}
