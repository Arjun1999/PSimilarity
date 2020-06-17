#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
 long int a[5],sum=0,min,max;
 int i;
 for(i=0;i<5;i++)
 {
 scanf("%ld",&a[i]);
 sum=sum+a[i];
 }
 min=sum;
 max=0;
 for(i=0;i<5;i++)
 {
 if(min>sum-a[i])
 min=sum-a[i];
 if(max<sum-a[i])
 max=sum-a[i];
 }
 printf("%ld %ld",min,max);
    return 0;
 }
