#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr)
{
    // Complete this function
    long sum[5]={0,0,0,0,0},i,j;
    for(i=0;i<5;i++)
       for(j=0;j<5;j++)
       {
    if(i!=j)
     {
        sum[i]+=arr[j];
     }    
        } 
 long min=99999999999,max=0;

 for( i=0;i<5;i++)
 {
     if(sum[i]>max) 
     { max=sum[i];}
if(sum[i]<min)
{min=sum[i];}
 }
    printf("%li %li",min,max);
}
 
int main()
{
   long *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++)
    {
       scanf("%li",&arr[arr_i]);
    }
    miniMaxSum(5, &arr);
    return 0;
}
