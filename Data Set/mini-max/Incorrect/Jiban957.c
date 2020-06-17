#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int a,b,c,d,e,i,sum1,sum2,sum3,sum4,sum5;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum1=b+c+d+e;
    sum2=a+c+d+e;
    sum3=a+b+d+e;
    sum4=a+b+c+e;
    sum5=a+b+c+d;
    if (sum1>sum2 && sum2>sum3 && sum3>sum4 && sum4>sum5)
        printf("%d %d",sum5,sum1);
    else if (sum2>sum1 && sum1>sum3 && sum3>sum4 && sum4>sum5)
        printf("%d %d",sum5,sum2);
    else if(sum3>sum1 && sum1>sum2 && sum2>sum4 && sum4>sum5)
        printf("%d %d",sum5,sum3);
    else if(sum4>sum1 && sum1>sum2 && sum2>sum3 && sum3>sum5 )
        printf("%d %d ",sum5,sum4);
  
    return 0;
}
