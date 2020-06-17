#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;
    long int a[5],min,max,sum=0; 
   for(i=0;i<5;i++)
    scanf("%ld ",&a[i]);
    min=a[0];
    max=a[4];
    for(i=0;i<5;i++)
        {
        sum=sum+a[i];
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("%ld %ld", sum-max,sum-min);

    
    return 0;
}
