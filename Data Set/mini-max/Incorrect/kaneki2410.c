#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int j;
    int i,a[5],b[5]={0,0,0,0,0};
    int max = 0,min = 1000;;
    for(i=0;i<5;i++)
        scanf("%d",a[i]);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            b[i] = b[i] + a[j];
        if(max < b[i])
            max = b[i];
        if(min > b[i])
            min = b[i];
    }
    printf("%d %d",min,max);
}
