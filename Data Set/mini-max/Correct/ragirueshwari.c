#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
 long long unsigned int a[5],min,max,sum=0;
    scanf("%llu",&a[0]);
    min=a[0],max=a[0],sum=a[0]+sum;
    for(int i=1;i<5;i++){
        scanf("%llu",&a[i]);
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum=sum+a[i];
    } 
    scanf("%llu %llu",&max,&min);
      printf("%llu %llu",sum-max,sum-min);
    return 0;
}
