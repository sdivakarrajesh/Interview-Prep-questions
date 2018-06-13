#include <stdio.h>
int main() {
    int testCases;
    scanf("%d",&testCases);
    int ans[testCases];
    for(int i=0;i<testCases;i++){
        int size,checker,count=0;
        scanf("%d%d",&size,&checker);
        int arr[size];
        for(int index=0;index<size;index++)
        {
            scanf("%d",&arr[index]);
            if(arr[index]<checker)count++;
        }
        ans[i] = count;
    }
    for(int i=0;i<testCases;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}
