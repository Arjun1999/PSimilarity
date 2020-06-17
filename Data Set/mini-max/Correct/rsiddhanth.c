#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long int sum[5]={0,0,0,0,0};
    long int buf_s;
    long int swap = 0;
    
    int i;
    int j;
    int k;
    for(k=0;k<5;k++)
        {
        scanf("%ld", &a[k]);
        //printf("%ld\n", a[k]);
    }
    for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
          {
            sum[i]+=a[j];
          }
        
        sum[i]-=a[i];
        //printf("%ld\n",sum[i]);
        
    }
    /*buf_l=sum[0];
    //buf_s=sum[0];
    for(k=0;k<5;k++)
        {
        
        if(buf_l<=sum[k]){
            buf_l = sum[k];
            
        }
        else{
            buf_s = sum[k];
            
        }
        
    }
    printf("%ld %ld\n",buf_s, buf_l);
    
    */
    int d,c;
    for (c = 0 ; c < ( 5 - 1 ); c++)
  {
    for (d = 0 ; d < 5 - c - 1; d++)
    {
      if (sum[d] > sum[d+1]) /* For decreasing order use < */
      {
        swap       = sum[d];
        sum[d]   = sum[d+1];
        sum[d+1] = swap;
      }
    }
  }
    
    //for ( c = 0 ; c < 5 ; c++ )
    printf("%ld %ld\n", sum[0], sum[4]);
    return 0;
}