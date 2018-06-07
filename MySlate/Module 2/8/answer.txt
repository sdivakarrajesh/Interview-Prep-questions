#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int dd[n],mm[n],yy[n];
    for(int i=0;i<n;i++)
    {scanf("%d/%d/%d",&dd[i],&mm[i],&yy[i]);}
    for(int i=0;i<n;i++)
    {
        if(yy[i]>=1900 && yy[i]<=2200)
        {
        if(mm[i]>=1 && mm[i]<=12)
        {   if((dd[i]>=1 && dd[i]<=31) && (mm[i]==1 || mm[i]==3 || mm[i]==5 || mm[i]==7 || mm[i]==8 || mm[i]==10 || mm[i]==12))
                printf("VALID\n");
            else if((dd[i]>=1 && dd[i]<=30) && (mm[i]==4 || mm[i]==6 || mm[i]==9 || mm[i]==11))
                printf("VALID\n");
            else if((dd[i]>=1 && dd[i]<=28) && (mm[i]==2))
                printf("VALID\n");
            else if(dd[i]==29 && mm[i]==2 && (yy[i]%400==0 || (yy[i]%4==0 && yy[i]%100!=0)))
                printf("VALID\n");
            else
                printf("NOT VALID\n");
        }
        else
        {printf("NOT VALID\n");}
        }else{printf("NOT VALID\n");}
    }
    return 0;
}
