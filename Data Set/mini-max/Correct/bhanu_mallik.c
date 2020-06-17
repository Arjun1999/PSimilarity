#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;
    long int max,min,sum;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
  sum = a+b+c+d+e;
  long int arr[5]={sum-a,sum-b,sum-c,sum-d,sum-e};
    min =arr[0];  max=arr[0];
    for(i=1;i<5;i++)

        if(min>arr[i])
         min = arr[i];
     for(i=1;i<5;i++)
          if(max<arr[i])
         max = arr[i];
         printf("%ld %ld",min,max);
    return 0;
}
