#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc(const void* a,const void* b)
    {
    return (*(long long int *)a-*(long long int*)b) ;
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int arr[5] ;
    arr[0]=a ,arr[1]=b,arr[2]=c,arr[3]=d,arr[4]=e ;
    qsort(arr,5,sizeof(long long int),cmpfunc) ;
    printf("%lld %lld",arr[0]+arr[1]+arr[2]+arr[3],arr[1]+arr[2]+arr[3]+arr[4]);
    
    return 0;
}
