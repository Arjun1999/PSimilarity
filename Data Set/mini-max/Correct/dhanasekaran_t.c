#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int smallest;
    long int biggest;
    long int arr[5];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    smallest =arr[0];
    biggest = arr[0];
    for(int i=1;i<5;i++)
        {
        if(arr[i]<smallest)
            smallest=arr[i];
        if(arr[i]>biggest)
            biggest = arr[i];
    }
    long long int minSum=0;
    long long int maxSum=0;
    int minSkipped =0;
    int maxSkipped =0;
    for(int j=0;j<5;j++)
        {
        if(maxSkipped || arr[j] != smallest)
            maxSum = maxSum +arr[j];
        else
            maxSkipped =1;
        if(minSkipped || arr[j]!=biggest)
            minSum = minSum+arr[j];
        else
            minSkipped =1;
    }
    printf("%lld %lld",minSum,maxSum);
    return 0;
}
