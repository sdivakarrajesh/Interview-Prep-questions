#include<stdio.h>
int main()
{
    int rows,element=0;
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        if(i%2==1)
        {
            printf("%d",++element);
            for(int n=1; n<i; n++)
            {
                printf("*%d",++element);
            }

        }
        else{
            element = element+i;
            printf("%d",element);
            for(int n=1;n<i;n++){
                printf("*%d",--element);
            }
            element= element+i-1;
        }
    printf("\n");
    }
    return 0;
}
