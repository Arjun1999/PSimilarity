#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void bubblesort(long long int*);
int main(){
    long long int array[5]; 
    scanf("%lld %lld %lld %lld %lld",&array[0],&array[1],&array[2],&array[3],&array[4]);
    bubblesort(array);
    printf("%lld %lld",array[0]+array[1]+array[2]+array[3],array[1]+array[2]+array[3]+array[4]);
    return 0;
}
void bubblesort (long long int *array){
    int i,j;
    long long int temp;
    for(j=0;j<4;j++){
        for(i=0;i<4;i++){
            if(array[i+1]<array[i]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
}
