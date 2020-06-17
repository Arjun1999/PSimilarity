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
    long long int i,j,sum[5]={0},min=0,max=0,val[5],k=0;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    val[0]=a;val[1]=b;val[2]=c;val[3]=d;val[4]=e;
    for(i=0;i<5;i++)
        for(j=0;j<4;j++,k++)
            sum[i]+=val[k%5];
        
min=max=sum[0];
   /* printf("\n");
    for(i=0;i<5;i++)
        printf("%d ",sum[i]);*/
    for(i=1;i<5;i++)
        {
        if(min>sum[i])
           min=sum[i];
        if(max<sum[i])
            max=sum[i];
    }
        printf("%lld %lld",min,max);
        return 0;
}
