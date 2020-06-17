#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
 int arr[5],i,temp,j;
 for(i=0;i<5;i++){
  scanf("%d",&arr[i]);}
  for(i=0;i<4;i++)
  {
      for(j=0;j<5;j++)
      {
          if(arr[i]>arr[j])
           {
               temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
      }
  }
  printf("%d",arr[0]+arr[1]+arr[2]+arr[3]);
  printf("\t %d",arr[1]+arr[2]+arr[3]+arr[4]);
}




