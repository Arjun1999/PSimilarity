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
    long  long int  d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long long int sum = a + b + c + d + e;
    long long int min = 0;
    long long int tmp = sum;
    min = sum;
    
    // printf("sum = %lld\n",sum);
    // printf("min = %lld\n",min);
    
    if(sum - a < sum)
    {
      //  printf("sum - a = %lld\n",sum -a);
        min = sum - a;
       // printf("min = %lld\n",min);

    } 
    
    if(min > sum - b)
    {
        // printf("sum - b = %lld\n",sum - b);
        min = sum - b;
        // printf("min = %lld\n",min);

    }    
    if(min > sum - c)
    {
        // printf("sum - c = %lld\n",sum - c);
        min = sum - c;
        // printf("min = %lld\n",min);
    }   
    if(min > sum - d)
    {
        // printf("sum - c = %lld\n",sum - d);
        min = sum - d;        
        // printf("min = %lld\n",min);

    }   
    if(min > sum - e)
    {
        // printf("sum - c = %lld\n",sum - c);
        min = sum - e;
        // printf("min = %lld\n",min);

    }
    
    //printf("min = %lld\n", min);
     long long int max = 0;
    
    
    if(sum - a > max)
    {
        max = sum - a;
    }    
    if(  sum - b > max)
    {
        max = sum - b;
    }    
    if(sum - c > max)
    {
        max = sum - c;
        
    }   
    if(sum - d  > max)
    {
        max = sum - d;        
    }   
    if( sum - e > max)
    {
        max = sum - e;
    }
    
    printf("%lld %lld",min, max);
    
    
    
    return 0;
}
