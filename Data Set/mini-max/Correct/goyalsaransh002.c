#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],m,min,max,i,j;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<=4;i++)
        {
        j=i+1;
        for(;j<=4;j++)
        {    
         if(a[i]>a[j])
             {
           m=a[i];
           a[i]=a[j];
           a[j]=m;
             }
        }
        } 
     min=a[0]+a[1]+a[2]+a[3];
     max=a[1]+a[2]+a[3]+a[4];
     printf("%ld ",min);
     printf("%ld",max);
    
    return 0;
}
