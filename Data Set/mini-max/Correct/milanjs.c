#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    long long int max=0;
    long long int sum=0;
    long long int min=0;
    
    for (int i=0;i<5;i++)
        {sum=0;
        for(int j=0;j<5;j++)
            if(i!=j)
            sum = sum + a[j];
           
         if(sum<min || min ==0)
            min = sum;
         if(sum>max)
            max=sum;
            
            
    }
    
    printf("%lld %lld",min,max);
    
    
    
    return 0;
}
