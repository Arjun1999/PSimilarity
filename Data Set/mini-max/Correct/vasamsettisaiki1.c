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
    long long int sum=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
   int i,j;
    sum=a+b+c+d+e;
    long int x[5]={a,b,c,d,e};
   long long int min=sum,max=0;
    for(i=0;i<5;i++)
        {
        if(min>sum-x[i])
         {   min=sum-x[i];
          
         }
        if(max<sum-x[i]){
            max=sum-x[i];
            
        }
       // printf("%lld\n",min);printf("%lld\n",max);
    }
    printf("%lld %lld",min,max);
    return 0;
}
