#include<stdio.h>

int main()
{
    int n,nums=0;
    scanf("%d",&n);
    for(int line=0; line<n; line++)
    {
        if(line%2==0)
        {   nums = nums+1;
            for(int i=0; i<n; i++)
            {
                printf("%d",nums);
            }
            nums = nums+1;
            printf("%d",nums);
        }
        else
        {
            printf("%d",nums+1);
            for(int i=0; i<n; i++)
            {
                printf("%d",nums);
            }

        }
        printf("\n");
    }


    return 0;
}
