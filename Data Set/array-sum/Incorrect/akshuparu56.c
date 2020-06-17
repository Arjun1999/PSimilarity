#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    int n;
    int arr_i; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
        scanf("%d",&arr[arr_i]);}
    int sum=0;
        for (arr_i=0; arr_i<n; arr_i++)
            {sum=sum+arr[arr_i];
            }
        for(arr_i=0; arr_i<n; arr_i++)
            printf("\n arr[%d]=%d",arr_i,arr[arr_i]);
        printf("\nsum=%d",sum);
    return 0;
    
}
