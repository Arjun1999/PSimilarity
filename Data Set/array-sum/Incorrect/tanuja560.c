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
    int arr[n],sum=0;
    for(int i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        sum=arr[i]+arr[i+1]; 
    }
    printf("sum is %d",sum);
     return 0;
}
