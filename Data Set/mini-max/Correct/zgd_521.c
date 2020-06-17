#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int arr[5] = {a, b, c, d, e};
    for(int i=0; i<5;i++){
        for(int j=i+1; j<5; j++){
            if(arr[i]>arr[j]){
                long int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    long int min=0, max=0;
    for(int k=0; k<4; k++){
        min += arr[k];
        max += arr[4-k];
    }
    printf("%ld %ld", min, max);
    return 0;
}
