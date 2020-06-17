#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int main() 
{
    long int arr[5],i,j,k,max,min;
    for(i=0;i<5;i++)
       {
        scanf("%ld",&arr[i]);
       }
    for(i=0;i<5;i++)
       {
        k=0;
        for(j=0;j<4-i;j++)
           {
            if(arr[j]>arr[j+1])
              {
               swap(&arr[j],&arr[j+1]);
               k++;
              }
           }
        if(k==0)
        break;
       } 
    min=arr[0]+arr[1]+arr[2]+arr[3];
    max=arr[1]+arr[2]+arr[3]+arr[4];
    printf("%ld %ld",min,max);
    return 0;
}
