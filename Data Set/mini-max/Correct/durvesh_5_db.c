#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long int sum;
    int index;
    for(index = 0;index<5 ; index++)
        {
            scanf("%lld",&a[index]);
    }
    sum = a[0] + a[1] + a[2] + a[3] + a[4];
    long int min,max=0,temp;
    min = sum;
    for(index = 0 ; index < 5 ; index++)
        {
            temp = sum - a[index];
            if(temp > max)
                max = temp;
            if(temp < min)
                min = temp;
        }
    printf("%lld %lld",min,max);
    return 0;
}
