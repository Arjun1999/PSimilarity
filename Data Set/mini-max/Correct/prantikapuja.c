#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int i,j,max,min,s;
    int *a = malloc(sizeof(int) * 5);
    for(i = 0; i < 5; i++){
       scanf("%d",&a[i]);
    }
    max=min=s=a[0];
    for(i=1;i<5;i++){
        int t = a[i];
        s += t;
        if(max > t){
            if(min > t)
                min = t;
        }
        else
            max = t;
    }
    long int max1 = s-min;
    long int min1 = s-max;
    printf("%ld %ld",min1,max1);
    return 0;
}
