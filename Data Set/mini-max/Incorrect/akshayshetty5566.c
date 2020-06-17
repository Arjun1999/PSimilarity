#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  int arr[100];
    int max,min,size,i;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
min=arr[0];
    max=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
    } 
    if(arr[i]<min)    
    {
        min=arr[i];
    } 
    } 
printf("max element=%d/n",max);
printf("min element=%d",min) ;       
return 0;
    }


