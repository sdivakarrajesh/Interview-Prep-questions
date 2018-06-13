#include <stdio.h>
int main() {
    int n,n1=1,n2=1,next=0;
    scanf("%d",&n);
    if(n==1) printf("1");
    else if(n>=2) 
    {
    printf("1 1 ");
    for(int i=2;i<n;i++){
        next = n1+n2;
        printf("%d ",next);
        n1 = n2;
        n2 = next;
    }   
    }    
    
    
    return 0;
}
