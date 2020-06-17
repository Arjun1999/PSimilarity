#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int ary[5],max,min,sum=0;
    int i;
    for(i=0;i<5;i++){
        scanf("%ld",&ary[i]);
    sum+=ary[i];
    }
    min=max=ary[0];
    for(i=1;i<5;i++){
        if(ary[i]<min)
            min=ary[i];
        if(ary[i]>max)
            max=ary[i];
    }
    printf("%ld %ld",sum-max,sum-min);        
}
