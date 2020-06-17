#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int sum=0,i,a[1000];
int b;
scanf("%d",&b) ;
for(i=0;i<=b;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=b;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
return 0;
}
