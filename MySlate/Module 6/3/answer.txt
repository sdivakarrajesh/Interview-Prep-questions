#include<stdio.h>
int main()
{
    int n,num1=0,num2=0;
    scanf("%d",&n);
    int nums[n+2];
    for(int i=0;i<n+2;i++){
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n+2;i++){
        for(int j=i+1;j<n+2;j++){
            if(nums[i]==nums[j]&&num1!=0)num2=nums[i];
            else if(nums[i]==nums[j])num1=nums[i];
        }
    }
    printf("%d,%d",num1,num2);
    return 0;
}

