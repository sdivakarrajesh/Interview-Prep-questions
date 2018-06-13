#include<stdio.h>
int main() {

    int n;
    scanf("%d",&n);
    int divident[n],divisor[n];
    for(int i =0;i<n;i++)
    {
    scanf("%d%d",&divident[i],&divisor[i]);
    }
    for(int i=0;i<n;i++)
    {
        int quotient=0,remainder=divident[i];
    while(remainder>=divisor[i])
    {
        remainder = remainder- divisor[i];
        quotient++;
    }
    printf("%d / %d = %d\n",divident[i],divisor[i],quotient);
    printf("%d %% %d = %d\n",divident[i],divisor[i],remainder);
    }
    return 0;
}
