#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,a[100],sum,num;
printf("Enter number of elements");
scanf("%d",&num);
printf("Enter values");
for(i=0;i<num;i++)
    {
    scanf("%d",&a[i]);
    }
sum=0;
for(i=0;i<num;i++)
    {
    sum=sum+a[i];
    }
    for (i=0;i<num;i++)
        {
    printf("a[%d]=%d",i,a[i]);
    }

printf("sum=%d",sum);
return 0;
}