#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int a[5],b[5];
long int n;
int i, j, k, l=0, m=0;    
scanf("%ld",&n);
for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
for(i=0;i<n-1;i++)
 {
 for(j=i+1;j<n;j++)
  {
  if(a[i]<a[j])
   {
   b[k]=a[i];
   a[i]=a[j];
   a[j]=b[k];
   b[k]=a[i];
   }
  }
 }
for(i=0;i<n-1;i++)
 l=l+a[i];
for(i=1;i<n;i++)
 m=m+a[i];
printf("%d %d",l,m);
return 0;
}
