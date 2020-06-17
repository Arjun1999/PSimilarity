#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void minmax(long long int []);
#define SIZE 5
int main() {
    long long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    minmax(&arr);
    return 0;
}
void minmax(long long int arr[])
{
    int i=0,j=0;
    long long int max=0;
    long long int sum=0;
    //finding max
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            if(i==j){   
            
            continue;
            }
            sum+=arr[i];
         }
        
        if(max<sum) {
        max=sum;
        }
        sum=0;
    }
    printf("%lld\n",max);
    
    
}