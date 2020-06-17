#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void subset(int a[],int el);

int main() {
    int i,j;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
  
   subset(arr,arr[i]);
 
    return 0;
}
void subset(int a[],int el)
{
    int it,min,max,arr[10],k=0;
    int sum_max=0,sum_min=0;
    min=a[0];
    for(it=1;it<5;it++)
    {
        if(a[it]<min)
        {
            min=a[it];
        }
        else
        {
            arr[k]=a[it];
            k++;
        }
    }
    for(it=0;it<k;it++)
    {
        printf("%d\t",arr[it]);
          sum_max=sum_max+arr[it]; 
    }
    max=a[0];
    k=0;
    for(it=1;it<5;it++)
    {
        if(a[it]>max)
        {
            max=a[it];
        }
        else
        {
            arr[k]=a[it];
            k++;
        }
    }
    
    for(it=0;it<5;it++)
    {
        if(a[it]==max)
        {
            
        }
        else
        {
            sum_min=sum_min+a[it];    
        }
    }
    printf("%d %d\n",sum_min,sum_max);
}