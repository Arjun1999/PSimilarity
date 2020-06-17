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
    int i,j;
    long int m[8],min,max,k;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    m[0]=a+b+c+d;
    m[1]=a+b+c+e;
    m[2]=a+b+d+e;
    m[3]=a+c+d+e;
    m[4]=b+c+d+e;
    for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(m[i]>m[j])
                {
                k=m[i];
             m[i]=m[j];
             m[j]=k ;
            }
        }
    }
     printf("%ld %ld",m[0],m[4]);   
        
   
    
    return 0;
}
