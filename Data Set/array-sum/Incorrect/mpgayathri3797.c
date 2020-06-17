#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
int sum=0,a[100],n,i;
printf("enter the total numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the numbers");
    scanf("%d",&a[i]);
sum=sum+a[i];
}
return 0;}