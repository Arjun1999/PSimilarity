#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int max=0, min=0, aux=0, flag=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i = 0; i< 5; i++)
    {
        aux=0;
        for(int j = 0 ; j< 5; j++)
        {
            if(i!=j) aux = aux+arr[j];
        }
        if(aux > max) max = aux;
        if(flag == 0)
        {
            min = aux;
            flag =1;
        }
        if(min > aux && flag == 1) min = aux;
    }

    printf("%ld %ld", min, max);
    return 0;
}
