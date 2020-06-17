#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int i,temp,min=0,max=0;
    for(i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    for (i=0; i<5; i++) {
        if (arr[i]>arr[i+1]) {
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1] = temp;
        }
        if (arr[i]>arr[i+2]) {
            int temp = arr[i];
            arr[i]=arr[i+2];
            arr[i+2] = temp;
        }
        if (arr[i]>arr[i+3]) {
            int temp = arr[i];
            arr[i]=arr[i+3];
            arr[i+3] = temp;
        }
    }
    for (i=0; i<4; i++) {
        min = min + arr[i];
    }
    for (i=1; i<5; i++) {
        max = max + arr[i];
    }
    printf("%d\n%d\n",min,max);
    return 0;
}
