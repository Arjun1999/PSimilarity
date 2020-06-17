#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n=5,x; 
   
    int arr[n]={1,2,3,4,10,11};
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        x=x+arr[arr_i];
    }
    printf(""+x);
    
    return 0;
}
