#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    printf("enter the size:\n");
    scanf("%d",&n);
    int arr[n],s=0;
    printf("enter the array elements:");
    for(int arr_i = 1; arr_i <= n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
        s=s+arr[arr_i];
        printf("%d is the output",s);
        
    
    return 0;
}
