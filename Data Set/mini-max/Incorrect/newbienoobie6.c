#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    int a[10],i,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,max,min;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {
    if(a[0])
    break;
    sum1=sum1+a[i];
    }
    for(i=0;i<5;i++)
    {
    if(a[1])
    break;
    sum2=sum2+a[i];
    }
    for(i=0;i<5;i++)
    {
    if(a[2])
    break;
    sum3=sum3+a[i];
    }
    for(i=0;i<5;i++)
    {
    if(a[3])
    break;
    sum4=sum4+a[i];
    }
    for(i=0;i<5;i++)
    {
    if(a[4])
    break;
    sum5=sum5+a[i];
    }
    if((sum1>sum2)&&(sum1>sum3)&&(sum1>sum4)&&(sum1>sum5))
    max=sum1;
    else if((sum2>sum1)&&(sum2>sum3)&&(sum2>sum4)&&(sum2>sum5))
    max=sum2;
    else if((sum3>sum1)&&(sum3>sum2)&&(sum3>sum4)&&(sum3>sum5))
    max=sum3;
    else if((sum4>sum1)&&(sum4>sum2)&&(sum4>sum3)&&(sum4>sum5))
    max=sum4;
    else
    max=sum5;
    if((sum1<sum2)&&(sum1<sum3)&&(sum1<sum4)&&(sum1<sum5))
    min=sum1;
    else if((sum2<sum1)&&(sum2<sum3)&&(sum2<sum4)&&(sum2<sum5))
    min=sum2;
    else if((sum3<sum1)&&(sum3<sum2)&&(sum3<sum4)&&(sum3<sum5))
    min=sum3;
    else if((sum4<sum1)&&(sum4<sum2)&&(sum4<sum3)&&(sum4<sum5))
    min=sum4;
    else
    min=sum5;
    printf("%d %d",min,max);
}
