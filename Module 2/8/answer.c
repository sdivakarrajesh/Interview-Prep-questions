#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int dd,mm,yy;
    for(int i=0;i<n;i++)
    {
        scanf("%d/%d/%d",&dd,&mm,&yy);
        if(yy>=1900 && yy<=2200)
        {
        if(mm>=1 && mm<=12)
        {   if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("VALID\n");
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("VALID\n");
            else if((dd>=1 && dd<=28) && (mm==2))
                printf("VALID\n");
            else if(dd==29 && mm==2 && (yy%400==0 || (yy%4==0 && yy%100!=0)))
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
