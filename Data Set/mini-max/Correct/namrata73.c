#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int i,j,c,N; 
    long long int b[5]; 
    
   scanf("%lld %lld %lld %lld %lld",&b[0],&b[1],&b[2],&b[3],&b[4]);
     for(i=1;i<=4;i++)
    {
        N=b[i];
        for(j=i-1;j>=0;j--)
        {
            if(N<b[j])
            {
                b[j+1]=b[j];
                b[j]=N;
            }
        }
    }
    
    printf("%lld %lld \n",b[1]+b[2]+b[3]+b[0],b[1]+b[2]+b[3]+b[4]);
  

    return 0;
}
