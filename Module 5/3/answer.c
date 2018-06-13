#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int nums[n],ans[n+1];
    for(int i =0;i<n;i++){
        scanf("%d",&nums[i]);
    }
        int max=nums[n-1];//last element
        nums[n-1] = -1;
        for(int i=n-2;i>=0;i--){ // reverse traversal
            int num=nums[i];
            nums[i]=max;
            if(num>max){
                max = num;
            }
        }
    for(int i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}

