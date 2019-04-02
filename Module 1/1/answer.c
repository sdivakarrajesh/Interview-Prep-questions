#include <stdio.h>
int main() {

 int n,i;
    scanf("%d",&n);
    int inputMonth,days[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
    char months[12][20] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    for(i = 0;i<n;i++)
    {
        scanf("%d",&inputMonth);
        printf("%s has %d days\n",months[inputMonth-1],days[inputMonth-1]);
    }
    return 0;
}
