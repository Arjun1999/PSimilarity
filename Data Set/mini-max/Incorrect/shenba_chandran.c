#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[10];
    int i,sum=0;
    int sum1;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum+=a[i];
       // sum=sum-a[i];
       // printf("%d\t",sum);
    }
    //printf("%d\t",sum);
    for(i=0;i<5;i++)
    {
    sum1=sum-a[i];
            printf("%d\t",sum1);

}
}