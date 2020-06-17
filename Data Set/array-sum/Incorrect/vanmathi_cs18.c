#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int i,n,a[50],sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+a[i];
 }
printf(" %d",sum);
return 0;
}

