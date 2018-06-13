#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int nextGreat=INT_MAX,changed=0;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]&&arr[j]<nextGreat){
                nextGreat = arr[j];
                changed=1;
            }
        }
        if(changed==1)printf("%d->%d\n",arr[i],nextGreat);
        else{printf("%d->\n",arr[i]);}
    }
}

