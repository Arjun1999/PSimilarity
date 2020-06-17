#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
long int i,max=0,min,sum=0,temp=0,arr[1000];
for(i=0;i<5;i++)
{
scanf("%ld",&arr[i]);
}
for(i=0;i<5;i++)
{
sum=sum+arr[i];
}
    min=sum;
for(i=0;i<5;i++)
{
temp=sum-arr[i];
if(temp>max)
    max=temp;
if(temp<min)
    min=temp;//14,13 12 11 10
}
printf("%ld %ld",min,max);
return 0;
}