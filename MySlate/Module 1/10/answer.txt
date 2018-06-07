#include <stdio.h>
int main() {

    int n,i;
    scanf("%d",&n);
    int speed;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&speed);
		if(speed<1){printf("Wind condition is Calm\n");}
        else if(speed>=1 && speed<=3){printf("Wind condition is Light Air\n");}
        else if(speed>=4 && speed<=27){printf("Wind condition is Breeze\n");}
        else if(speed>=28 && speed<=47){printf("Wind condition is Gale\n");}
        else if(speed>=48 && speed<=63){printf("Wind condition is Storm\n");}
        else if(speed>63){printf("Wind condition is Hurricane\n");}
    }
    return 0;
}
