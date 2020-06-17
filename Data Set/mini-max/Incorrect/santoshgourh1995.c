#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int min,max,sum1=0,sum2=0,n;
      scanf("%d",&n);  
  for(int arr_i=0;arr_i<n;arr_i++)
       scanf("%d",&arr[arr_i]);
          
  for(int arr_i=1;arr_i<n;arr_i++)  
  {
      min=arr[0];
      max=arr[0];
      if (arr[arr_i]<min)
          min=arr[arr_i];
      if (arr[arr_i]>max)
          max=arr[arr_i];
  }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==min)
            continue;
        sum1+=arr[i];
        
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]==max)
            continue;
        sum2+=arr[i];
    }
        
    printf("%d %d",sum2,sum1);
    
    
    return 0;
}
