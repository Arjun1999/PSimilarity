#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[100];
    int i,  size=5;
    long long int max, min;
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    arr[0]=b+c+d+e;
    arr[1]=a+c+d+e;
    arr[2]=a+b+d+e;
    arr[3]=a+b+c+e;
    arr[4]=a+b+c+d;  
    for(i=0; i<size; i++)
    {
        scanf("%lld", &arr[i]);
    }
    max = arr[0];
    min = arr[0]; 
 for(i=1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }      
        if(arr[i]<min)
        {
            min = arr[i];
        }
 }    
    printf("%lld ", min);
    printf("%lld", max);
 return 0;
}
