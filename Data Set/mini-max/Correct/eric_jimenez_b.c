#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j;
    long int aux,aux2;
    long int *arr = malloc(sizeof(long int) * 5);
    
    for(int i = 0; i < 5; i++){
       scanf("%ld",&arr[i]);
    }
    for(i=0;i<4;i++){
           for(j=0;j<4;j++){
               if(arr[j]>arr[j+1]){
                   aux=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=aux;
               }
           }
    }
    aux=arr[0]+arr[1]+arr[2]+arr[3];
    aux2=aux-arr[0]+arr[4];
    printf("%ld %ld",aux,aux2);
    return 0;
}
