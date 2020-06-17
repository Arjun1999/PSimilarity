#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int ar[5]={0};
    long long int i, maxR,minR;
    
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for(  i = 0;i< 5; i++){
        if( i == 0)
            continue;
        else
            ar[0] = ar[0] + *(arr+i);
    }
    
    for(i = 0;i< 5; i++){
        if( i == 1)
            continue;
        else
            ar[1] = ar[1] + *(arr+i);
    }

    for(i = 0;i< 5; i++){
        if( i == 2)
            continue;
        else
            ar[2] = ar[2] + *(arr+i);
    }

    for(i = 0;i< 5; i++){
        if( i == 3)
            continue;
        else
            ar[3]  = ar[3] + *(arr+i);
    }

    for(i = 0;i< 5; i++){
        if( i == 4)
            continue;
        else
            ar[4]  = ar[4] + *(arr+i);
    }
    
    maxR = ar[0];
    for(i=0;i<5;i++){
        
        if( maxR < ar[i])
        maxR = ar[i];
        else
            continue;
    }
    minR = ar[0];

    for(i=0;i<5;i++){
        
        if( minR > ar[i])
        minR = ar[i];
        else
            continue;
    }
    printf("%Ld %Ld", minR,maxR);
    return 0;
}
