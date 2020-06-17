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
    
    long int x1=a+b+c+d;
   long int  x2=a+b+c+e;
    long int x3=a+b+d+e;
    long int x4=a+c+d+e;   
   long int  x5=b+c+d+e;
    long int  arr[5]={x1,x2,x3,x4,x5};
    long int max=arr[0];
    long int  min=arr[0];
   for(int i=0;i<5;i++)
       {
       
       if(arr[i]>max)
           {
           max=arr[i];
       }      
   }
    
       for(int i=0;i<5;i++)
       {
       
        if(arr[i]<min)
           {
           min=arr[i];
       } 
   }
    
    printf("%ld %ld",min,max);
    return 0;
}
