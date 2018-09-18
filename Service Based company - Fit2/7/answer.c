#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int array[1000][1000], val, row, column, index, index1;
  scanf("%d %d %d", &row, &column, &val);
  for(index=0;index<row;index++)
  {
    for(index1=0;index1<column;index1++)
    {
      scanf("%d",&array[index][index1]);
    }
  }
  if(val==1){
  for(index=0;index<column;index++){
    for(index1=row;index1>0;index1--){
      printf("%d ",array[index1-1][index]);
    }
    printf("\n");
    }
  }
  else{
    for(index=column;index>0;index--){
      for(index1=0;index1<row;index1++){
      printf("%d ",array[index1][index-1]);
      }
    printf("\n");
      }
  }
    return 0;
}
