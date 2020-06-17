#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int mycomp(const void *a, const void *b)
    {
    return (*(int*)a - *(int*)b);
}
int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
  
    
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
      
    long int arr[5]={a,b,c,d,e};
    
    qsort(arr, 5, sizeof(long int), mycomp);
    
    long int minSum=arr[0]+arr[1]+arr[2]+arr[3];
    long int maxSum=arr[1]+arr[2]+arr[3]+arr[4];
    
    printf("%ld %ld",minSum,maxSum);
    return 0;
}
