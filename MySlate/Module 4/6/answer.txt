#include <stdio.h>
int main() {
    int n,testNum=1,count=0;
    scanf("%d",&n);
    while(count<n){
        count=0;
        testNum++;
        for(int factor=2;factor<testNum/2;factor++){
            if(testNum%factor==0){
            count++;
            }
        }
    }
    printf("%d",testNum);
    return 0;
}
