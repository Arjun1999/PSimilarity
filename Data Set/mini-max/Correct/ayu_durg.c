#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int s,arr[10],max,min;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    arr[0]=s-a;
    arr[1]=s-b;
    arr[2]=s-c;
    arr[3]=s-d;
    arr[4]=s-e;
    max = arr[0];
    min = arr[0];
    for(i=0; i<5; i++)
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
 
    printf("%lld %lld" ,min,max);
    return 0;
}
