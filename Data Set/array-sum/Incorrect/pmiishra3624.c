#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, sum=0; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%4d",&arr[arr_i]);
   
         }
    for (int i= 0; i <n; i++)
    {
        sum += arr [i];
    }
    printf ("sum=%d",sum);
    return 0;
}
