#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num,arr[100],sum=0,ctr,ctr1;
    scanf("%d",&num);
    for(ctr=0;ctr<num;ctr++)
    {
        scanf("%d",&arr[ctr]);
    }
    for(ctr1=0;ctr1<num;ctr1++)
        sum=sum+arr[ctr1];
    printf("%d",sum);
}
