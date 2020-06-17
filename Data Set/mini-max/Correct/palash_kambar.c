#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
     long long int a; 
    long long int b; 
    long long int c; 
   long long int d;
   long long int e;
   long long int sum[5],x,z,z1;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    sum[0]= a+b+c+d;
    sum[1]= e+b+c+d;
    sum[2]= a+e+c+d;
    sum[3]= a+b+e+d;
    sum[4]= a+b+c+e;
    
 //   printf("e=%lld a=%lld b=%lld c=%lld d=%lld     ",sum[0],sum[1],sum[2],sum[3],sum[4]);
    
    for(z=0;z<5;z++)
        {
       // if((z+1)==5)
       //     break;
        for(z1=0;z1<5;z1++)
            {
            if(sum[z] > sum[z1])
             {   x= sum[z1];
            sum[z1]=sum[z];
              sum[z]=x;
             }
            }
        }   
    
    //  printf("\ne=%lld a=%lld b=%lld c=%lld d=%lld     ",sum[0],sum[1],sum[2],sum[3],sum[4]);
    
    printf("%lld %lld",sum[4],sum[0]);
    return 0;
}
