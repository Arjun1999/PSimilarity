#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i, n,arr[6],sum=0; 
    scanf("%d",&n);
  
    for(i =0;i < n;i++)
    {
       scanf("%d",&arr[i]);
        sum=sum+arr[i];
        
        
    }
      printf("%d", sum);
    return 0;
}
