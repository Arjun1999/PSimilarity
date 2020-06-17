#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void main()
 {
     int a[1000],sum=0,i,n;
     printf("enter the size of array\n");
     scanf("%d",&n);
     printf("enter array elements\n");
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("the sum is %d\n",sum);
 }
