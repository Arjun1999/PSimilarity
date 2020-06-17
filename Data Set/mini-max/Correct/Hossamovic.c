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
    
   long int sums[5] = {0,0,0,0,0};
   long int nums[5] = {a,b,c,d,e};
   long int temp[5];
   long int max;
   long int min;
    
    for(int i = 0 ; i<5;i++)
    {
    for(int k = 0 ; k<5;k++)
    temp[k]= nums[k];

    temp[i] = 0;
    
    for(int j = 0 ; j<5;j++)
    sums[i]+=temp[j];
    }
    
    max = sums[0];
    for(int h = 0 ; h<5;h++)
        if(sums[h]>max)
        max = sums[h];
        
    min = sums[0];
    for(int l = 0 ; l<5;l++)
        if(sums[l]< min)
        min = sums[l];
    
    printf("%ld %ld",min,max);
    return 0;
}
