#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,s,min,max,sum=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(i=0;i<4;i++)
    {
     for(s=0;s<4;s++)
     {
      if(s==1)
       contiue;
        else
         sum=sum+a[s];
     }
        if(i==0)
        {
         min=max=sum;
        }
        else
        {
          if(sum<min)
              min=sum;
            if(sum>max)
              max=sum;
        }
    }
    
    
    return 0;
}
