#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum=0,i; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; aru r_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
