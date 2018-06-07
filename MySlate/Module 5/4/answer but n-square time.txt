#include<stdio.h>
int main()
{
    int n,sum=0,size=0,startIndex;
    scanf("%d",&n);
    int nums[n];
    for(int i =0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n-1;i++){
        sum = (nums[i]==0)?-1:1;  // take 0 as -1
        for(int j=i+1;j<n;j++){
            sum+= (nums[j]==0)? -1:1;
            if(sum==0 && size < j-i+1){//the current range from i to j
                size = j-i+1;//count of elements - one and 0 together
                startIndex = i;
            }
        }
    }
    if(size==0)printf("No such array");
        else printf("%d->%d\n",startIndex,startIndex+size-1);
    int another=0;
    for(int i=0;i<n-1;i++){
        sum = (nums[i]==0)?-1:1;
        for(int j=i+1;j<n;j++){
            sum+= (nums[j]==0)? -1:1;
            if(sum==0 && size == j-i+1 && i!=startIndex){//another range with the same size
                size = j-i+1;
                startIndex = i;

                printf("%d->%d\n",startIndex,startIndex+size-1);
            }
        }
    }

    return 0;
}

