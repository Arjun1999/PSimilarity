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
    
    long int max,min,k[5];
    int i,j;
    k[0]=b+c+d+e;
    k[1]=a+c+d+e;
    k[2]=a+b+d+e;
    k[3]=a+b+c+e;
    k[4]=a+b+c+d;
    max=k[0];
    min=k[0];
    
    for( j=0;j<5;j++)
        {
    for( i=0;i<5;i++)
        {
        if(k[i]>max)
            {
            max=k[i];
        }
        else 
            {
           //ax=k[j];
        }
    }      
    }
    
        for( j=0;j<5;j++)
        {
    for( i=0;i<5;i++)
        {
        if(k[i]<min)
            {
            min=k[i];
        }
        else 
            {
           //ax=k[j];
        }
    }      
    }
    printf("%ld %ld",min,max);
    //printf("  %ld %ld",k[0],k[4]);
    return 0;
}
