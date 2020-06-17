#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
int i,n,j,a[1000],sum=0;
scanf ("%d\n",&n);
for (i=0;i<n;i++)
   {
    scanf ("%d",&a[i]);
}
for(j=0;j<n;j++)
    {
    sum+=a[j];
}
    printf ("%d",sum);
    return 0; 
}
