#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n]; 
    int result ;
    for(int arr_i = 0; arr_i < n; arr_i++){
      result += scanf("%d",&arr[arr_i]);
    }
    printf ("%d", result)
    return 0;
}
