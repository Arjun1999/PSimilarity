#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(void)
{
    int a[100];
    int jumlah,i,count;
    scanf("%d",&jumlah);
    count=0;
    for(i=0;i<jumlah;i++)
    {
        scanf("%d",&a[i]);
        count=count+a[i];
    }
    printf("%d\n",count);
    
}