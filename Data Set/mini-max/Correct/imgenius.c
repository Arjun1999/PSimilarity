#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],min,max;
    long int sum[5];
    for(int i=0;i<5;i++)
    {scanf("%ld",&a[i]);}
    
    for(int i=0;i<5;i++){
        sum[i]=0;
        for( int j=0;j<5;j++){
            if(i!=j){
                sum[i]=sum[i]+a[j];
            }
        }
    }
    min=sum[0];
    max=sum[0];
    for(int i=0;i<5;i++)
        {
        
        if(min>sum[i]){
            min=sum[i];
        }
        if(max<sum[i]){
            max=sum[i];
        }
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
