#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   
    int sum=0,min,max,n,i;
                  
                  scanf("%d",&n);
                  int *a = malloc(sizeof(int)*n);
                  for(i=0;i<n;i++)
                       {
                                  scanf("%d",&a[i]);
                       }
                  max=a[0];
                  min=max;
                  for(i=1;i<n;i++)
                            {
                                  if(a[i]>max)
                                  max=a[i];
                                  
                            }
                  for(i=1;i<n;i++)
                            {
                                  if(a[i]<min)
                                  min=a[i];
                            }
                 for(i=0;i<n;i++)
                 {
                                 sum=sum+a[i];
                 }
                 
                 printf("%d %d",(sum-min),(sum-max));
                 
    
    return 0;
    
}
