#include <stdio.h>
int main() {

 int n,i;
    scanf("%d",&n);
    int inputMonths[n],days[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
    char months[12][20] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    for(i = 0;i<n;i++)
    {
        scanf("%d",&inputMonths[i]);
    }
    for(i = 0;i<n;i++)
    {
        printf("%s has %d days\n",months[inputMonths[i]-1],days[inputMonths[i]-1]);
    }
    return 0;
}
