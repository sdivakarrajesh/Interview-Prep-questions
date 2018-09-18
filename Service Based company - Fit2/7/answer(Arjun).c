#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  long r,c,flag;
  cin>>r>>c>>flag;
  long a[r][c];
  for(long i=0;i<r;i++)
  {
    for(long j=0;j<c;j++)
    cin>>a[i][j];
  }
  if(flag==1)
  {
    for(long i=0;i<c;i++)
    {
    for(long j=r-1;j>=0;j--)
    cout<<a[j][i]<<" ";
    cout<<endl;
    }
  }
  else
  {
    for(long i=c-1;i>=0;i--)
    {
    for(long j=0;j<r;j++)
    cout<<a[j][i]<<" ";
    cout<<endl;
    }
  }
  return 0;
}
