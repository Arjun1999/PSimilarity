#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
 long long int i,max=0,min,sum=0;
    int *a = malloc(sizeof(int) * 5);
    for( i = 0; i < 5;i++){
       scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
        sum=sum+a[i];
}
    printf("%ld ",sum-max);
    printf("%ld",sum-min);
    return 0;
}
