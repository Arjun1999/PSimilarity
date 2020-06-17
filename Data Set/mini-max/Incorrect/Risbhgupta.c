#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[5],i,max;
    printf("enter in elemants in array");
    for (i=0; i<=4;i++)
        scanf("%d",&a[i]);
        max=a[0];
        for (i=0;i<=4;i++)
            {
                if(max<a[i])
                {
                    max=a[i];
                }
            }
    printf("Max value is %d",max);
}
