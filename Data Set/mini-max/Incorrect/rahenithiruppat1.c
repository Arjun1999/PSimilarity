#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int i;
int a[5];
int sum;
int max=a[0];
int min=a[0];
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
for(i=1;i<5;i++)
{
if(min<a[i])
{
min=a[i];
}
if(max>a[i])
{
max=a[i];
}
}
int total1=sum-min;
int total2=sum-max;
printf("%d\t",total1);
printf("%d",total2);
return 0;
}