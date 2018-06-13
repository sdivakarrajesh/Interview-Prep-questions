#include<stdio.h>
#include<stdbool.h>
bool isCorrect(int arr[],int n,int max,int min){
if(max-min+1==n){
        bool *visited = (bool *)calloc(n,sizeof(bool));
        for(int i=0;i<n;i++){
            if(visited[arr[i]-min]==true)return false;//repetition checking
            visited[arr[i]-min] == true;
        }
        return true;//checked all elements and they do not repeat
    }
    return false;//max-min+1 !=n
}
int main()
{
    int n,correct=1;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0],min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)max = arr[i];
        if(arr[i]<min)min = arr[i];
    }
    if(isCorrect(arr,n,max,min))
    printf("Consecutive");
    else
    printf("Not Consecutive");
    return 0;
}
