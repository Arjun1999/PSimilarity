#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int i,j,s,n,a,max=2,min,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i+1;j<n;j++)
        {
            s=s+a[j];
        }
            if(s>=max)
            {
                max=s;
            }
        else{
            
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i+1;j<n;j++)
        {
            sum=sum+a[j];
        }
            if(sum<s){
                min=s;
            }
        
    }
    printf("%d %d",max,min);
    
    return 0;
}
