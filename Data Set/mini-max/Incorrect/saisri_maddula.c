#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int *b=malloc(sizeof(int)*5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    int i,j;
    for(i=0;i<5;i++)
    {
      for(j=i+1;j<5;j++)
      {
          b[i]=arr[j]+b[i];
      }
    }
    if(i>0)
    {
      for(j=0;j<i;j++)
      {
          b[j]=b[j]+arr[j];
      }
    }
    for(i=0;i<5;i++)
    {
        printf("\t%d",b[i]);
    }
    
    return 0;
}
