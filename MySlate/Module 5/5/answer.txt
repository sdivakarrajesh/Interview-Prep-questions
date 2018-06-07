#include<stdio.h>
void swap(int *n1,int *n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
    return;
}
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n],nums[n],times[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        int added=0;
        for(int j=0; j<count; j++)
        {
            if(arr[i]==nums[j])
            {
                times[j]++;
                added=1;
            }
        }
        if(added==0)
        {
            nums[count]=arr[i];
            times[count] = 1;
            count++;
        }
    }
    int rounds = 0;
    while(rounds<count){
    for(int i=0; i<count-1; i++)
    {
       if(times[i]<times[i+1]){
        swap(&times[i],&times[i+1]);
        swap(&nums[i],&nums[i+1]);
        }

    }
    rounds++;
    }

    for(int i=0;i<count;i++){
        for(int j=0;j<times[i];j++){
        printf("%d ",nums[i]);
        }

    }
    return 0;
}

