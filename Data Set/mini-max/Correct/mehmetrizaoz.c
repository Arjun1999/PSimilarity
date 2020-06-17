#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long int max=0, min=0, sum=0;
    scanf("%li %li %li %li %li",&a[0],&a[1],&a[2],&a[3],&a[4]);
    max=a[0];min=a[0];
    for(int i=0;i<5;i++){
        if(max < a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum+=a[i];
    }
    printf("%li %li",sum-max, sum-min);
    return 0;
}
