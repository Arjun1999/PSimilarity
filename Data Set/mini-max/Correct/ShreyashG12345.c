#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long long int v; 
    long long int w; 
    long long int x; 
    long long int y;
    long long int z;
    scanf("%lld %lld %lld %lld %lld",&v,&w,&x,&y,&z);
    long long int arr[5]={v,w,x,y,z};
   for (int c = 0 ; c < (4 ); c++)
  {
    for (int d = 0 ; d < 5- c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        long int swap = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
   long long int min=0;
    long long int max=0;
    for(int k=0;k<4;k++)
        {min=min+arr[k];}
    for(int l=1;l<5;l++)
        {max=max+arr[l];} 
    printf("%lld %lld",min,max);
    
        
    return 0;
}
