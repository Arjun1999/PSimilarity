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
    long long int max =0;
    long long int min = 0 ;
    long long int temp = 0;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
  long long  int arr[5] = {a,b,c,d,e};
    
    int i = 0;
    int j = 0;
    
    
    for(i = 0; i< 5; i++)
        {
            for(j = 0; j < 5-i-1 ; j++)
             {
                if(arr[j]>arr[j+1])
                    {
                     temp =arr[j];
                     arr[j] =arr[j+1];
                     arr[j+1] = temp;
                    }
              }
        }
        
    max = arr[1] + arr[2] +arr[3] + arr[4];
    min = arr[0] + arr[1] +arr[2] +arr[3];
    
    printf("%lld %lld",min,max);
    return 0;
}
