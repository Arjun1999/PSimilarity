#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum=0,arr_i; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i <=n; arr_i++){
       scanf("%d",&arr_i);
        for(arr_i = 0; arr_i <=n; arr_i++)
            sum=sum+arr_i;
       
    }
    printf("sum is:%d",sum);

}
