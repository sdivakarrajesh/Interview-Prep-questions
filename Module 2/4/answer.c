#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int max,min,mid;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&max);
        scanf("%d",&mid);
        scanf("%d",&min);
        if((max>=mid) && (max>=min))
        {
            printf("%d > ",max);
            mid>=min? printf("%d > %d\n",mid,min):printf("%d > %d\n",min,mid);
        }
        if((mid>=max) && (mid>=min))
        {
            printf("%d > ",mid);
            max>=min? printf("%d > %d\n",max,min):printf("%d > %d\n",min,max);
        }

        if((min>=max) && (min>=mid))
        {
            printf("%d > ",min);
            max>=mid? printf("%d > %d\n",max,mid):printf("%d > %d\n",mid,max);
        }
    }
    return 0;
}
