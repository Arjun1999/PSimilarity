#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n = 6; 
    //scanf("%d",&n);
    int arr[] = {1,2,3,4,10,11};
    int sum = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       sum = sum + arr[arr_i];
        
    }
    printf("%d",sum);
    return 0;
}
