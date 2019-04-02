#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int hh,mm,ss;
    for(int i=0;i<n;i++)
    {
        scanf("%d/%d/%d",&hh,&mm,&ss);
        if(hh>=0 && hh<=24)
        {
            if(mm>=0 && mm<=59)
            {   if((ss>=0 && ss<=59))
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
