#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    
    int sum=0;
    int arr[10]= {338, 65, 713, 595, 428, 610, 728, 573, 871, 868};

    for(int arr_i = 0; arr_i < 10; arr_i++){
       
         
         sum = sum + arr[arr_i];
       
    }
     printf("%d",sum);
    return 0;
}
