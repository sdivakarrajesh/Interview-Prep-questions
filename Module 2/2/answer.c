#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int divident,divisor;
    for(int i =0;i<n;i++){
        scanf("%d%d",&divident,&divisor);
        int quotient=0,remainder=divident;
        while(remainder>=divisor){
                remainder = remainder- divisor;
                quotient++;
        }
        printf("%d / %d = %d\n",divident,divisor,quotient);
        printf("%d %% %d = %d\n",divident,divisor,remainder);
    }
    return 0;
}
