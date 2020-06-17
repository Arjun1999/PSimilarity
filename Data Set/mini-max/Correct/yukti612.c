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
    long int sum[5]={0};
    long int arr[5]={a,b,c,d,e};
    int i=0;
    

    
    for(i=0;i<5;i++)
        {
            long int arr[5]={a,b,c,d,e};
            arr[i]=0;
            sum[i]=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    }
    
   /* for(i=0;i<5;i++)
        {
            printf("%ld ",sum[i]);
    }*/
    
    long int max=sum[0];
   
    
    for(i=1;i<5;i++)
        {
       
            if(sum[i]>max)
                {
                    max=sum[i];   
            }                       
                 
    }
    
    
    long int min=sum[0];
    
    for(i=1;i<5;i++)
        {
       
            if(sum[i]<min)
                {
                    min=sum[i];   
            }                       
                 
    }
    
    printf("%ld %ld",min,max);
    
    return 0;
}
