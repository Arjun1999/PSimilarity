#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,i,k,j,a[100],max[100],sum=0,sum1=0;
    scanf("%d",&n);
    for(i=0;i<4;++i)
    {scanf("%d",&a[i]);}
    max[0]=0;
    for(i=0;i<4;++i)
    {
        for(j=i+1;j<4;++j)
    if (a[j]<=a[i])
    {  k=a[i];
        a[j]=a[i];
     a[j]=k;
    
    }
    }
    for(i=0;i<3;++i)
    { sum=sum+a[j];}
  for(i=0;i<4;++i)
    { sum1=sum1+a[j];}
    printf("%d %d",sum,sum1);
    
    return 0;
}
