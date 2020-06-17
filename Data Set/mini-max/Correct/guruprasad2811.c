#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int a[20],d=0,b[20],max,min;
    int i,j;
    for(int r=0;r<5;r++){
       scanf("%ld",&a[r]);
    }
    for(i=0;i<5;i++){
        d=0;
        for(j=0;j<5;j++){
            if(j==i)
             continue;
        else {
        d=a[j]+d;
       }
        }
        b[i]=d;
    }
    max=b[0];
    min=b[0];
    for(i=0;i<5;i++){
        if(b[i]>max)
            max=b[i];
        if(b[i]<min)
            min=b[i];
       }
    
    printf("%ld %ld",min,max);
    return 0;
}
