
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    int *p,j,max,i;
    int sm=0,sx=0;
 p=arr;

for(i=0;i<6;i++)
{for(j=i+1;j<6;j++)
if(*(p+i)>*(p+j))
{
      max=*(p+j);
  *(p+j)=*(p+i);
  *(p+i)=max;}}
   
    for(i=0;i<5;i++)
    {if(i<=3) sm+=arr[i];
      if(i>=1)  sx+=arr[i];
     
    }
    printf("%d %d",sm,sx);
    return 0;
}
