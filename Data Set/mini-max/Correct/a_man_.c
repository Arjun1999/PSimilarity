#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,min=0,max=0,i,j; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int arr[5]={a,b,c,d,e},t;
    for(i=0;i<5;i++)
        {
          for(j=i+1;j<5;j++)
              { 
              if(arr[i]>arr[j])
                  {
                  t=arr[i];
                  arr[i]=arr[j];
                  arr[j]=t;
              } 
          }
    }
    for(i=0;i<4;i++)
        {
        min=min+arr[i];
    }
    for(i=1;i<5;i++)
        {
        max=max+arr[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
