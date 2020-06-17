#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,sum=0,i,a[100];
scanf(%d,&n);
for(i;i<n;i++)
{
    scanf(%d,a[i]);
    sum=sum+a[i];

}
printf("sum=%d",sum);
}
