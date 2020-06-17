#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum=0,arr[n]; 
    
    scanf("%d",&n);
   // int arr[n];
    for(int i=0; i<=n; i++){
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++)
        {
        //sum=0;
        sum=sum+arr[i];
    }
    printf("sum is: %d",sum);
    return 0;
}
