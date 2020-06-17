#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,l,j,k,max,min,temp2,temp;
    long sumax=0,sumin=0;
    
       int n=5;
    int arr[5];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
   }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
             temp=i;
        }
    }
  
        for(k=0;k<n;k++)
    {
            if(k!=temp)
            {
                sumax=sumax+arr[k];
            }
}
   
        
        min=arr[0];
    for(l=0;l<n;l++)
    {
        if(arr[l]<=min)
        {
            min=arr[l];
             temp2=l;
        }
    }
       
        for(j=0;j<n;j++)
    {
            if(j!=temp2)
            {
                sumin=sumin+arr[j];
                
            }

    }

        printf("%ld %ld", sumax,sumin);
        
        return 0;
    }
