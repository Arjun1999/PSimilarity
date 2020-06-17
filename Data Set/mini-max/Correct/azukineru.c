#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}


int main(){
    long int arr[10];     
    for(int i=0; i<5; i++){
        scanf("%li", &arr[i]);
    }
    
    qsort(arr, 5, sizeof(long int), cmpfunc);
    
    printf("%li %li", arr[0]+arr[1]+arr[2]+arr[3], arr[4]+arr[3]+arr[2]+arr[1]);
    
    return 0;
}
