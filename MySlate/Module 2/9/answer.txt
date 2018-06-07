#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int hh[n],mm[n],ss[n];
    for(int i=0;i<n;i++)
    {scanf("%d/%d/%d",&hh[i],&mm[i],&ss[i]);}
    for(int i=0;i<n;i++)
    {
        if(hh[i]>=0 && hh[i]<=24)
        {
        if(mm[i]>=0 && mm[i]<=59)
        {   if((ss[i]>=0 && ss[i]<=59))
                printf("VALID\n");
            else
                printf("NOT VALID\n");
        }
        else{printf("NOT VALID\n");}
        }
        else{printf("NOT VALID\n");}
    }
    return 0;
}
