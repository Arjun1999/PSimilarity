#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int cmpfunc(const void *a,const void *b){
            return (*(int*)a - *(int*)b);
}
int main(){
        long arr[5];
        for(int i = 0; i < 5; i++)
            scanf("%ld",&arr[i]);
        qsort(arr,5,sizeof(long),cmpfunc);
        int min,max;
        min = arr[0]+arr[1]+arr[2]+arr[3];
        max = min - arr[0] + arr[4];
        printf("%ld %ld",min,max);
        return 0;
}