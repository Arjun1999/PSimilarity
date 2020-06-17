#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[5],i,j,temp;
    long int max=0,min=0;
    for(i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
           
    }
    
for(i=0;i<4;i++)
    {
        for(j=0;j<5-1-i;j++)
            {
                if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                }
                    
        }
}
    
    for(i=0;i<4;i++)
        {
            min=min+a[i];
    }
    
     for(i=4;i>=1;i--)
        {
            max=max+a[i];
    }
    
   printf("%ld %ld",min,max);
}