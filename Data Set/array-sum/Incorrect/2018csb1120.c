#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,arr[1000],sum=0,i;
    scanf("%d",&n);
for(i=0;i<9;i++)
{
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
printf("%d",sum);
    return 0;
}