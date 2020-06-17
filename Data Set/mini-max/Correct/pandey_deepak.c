#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
 unsigned int a[5],max,min,sum=0;
    unsigned int i;
    scanf("%u",&a[0]);
    sum=a[0];max=a[0],min=a[0];
    for( i=1;i<5;i++){
        scanf("%u",&a[i]);
      if(max<a[i])
          max=a[i];
        if(min>a[i])
            min=a[i];
        sum=sum+a[i];
    }
    printf("%u\t%u",sum-max,sum-min);
    return 0;
}
