#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int max[n],min[n],mid[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&max[i]);
    scanf("%d",&mid[i]);
    scanf("%d",&min[i]);
    }
    for(int i =0;i<n;i++)
    {
      if((max[i]>=mid[i]) && (max[i]>=min[i]))
      {
          printf("%d > ",max[i]);
          mid[i]>=min[i]? printf("%d > %d\n",mid[i],min[i]):printf("%d > %d\n",min[i],mid[i]);
      }
      if((mid[i]>=max[i]) && (mid[i]>=min[i]))
      {
          printf("%d > ",mid[i]);
          max[i]>=min[i]? printf("%d > %d\n",max[i],min[i]):printf("%d > %d\n",min[i],max[i]);
      }

      if((min[i]>=max[i]) && (min[i]>=mid[i]))
      {
          printf("%d > ",min[i]);
          max[i]>=mid[i]? printf("%d > %d\n",max[i],mid[i]):printf("%d > %d\n",mid[i],max[i]);
      }
    }
    return 0;
}
