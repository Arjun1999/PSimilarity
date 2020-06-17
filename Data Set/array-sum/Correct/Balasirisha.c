#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a[1000],i,sum=0;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
        {
        for(i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
            if(a[i]>0 && a[i]<=1000)
                {
            sum=sum+a[i];
            }
            else
                {
                break;
            }
            }
    }
    printf("%d",sum);
        return 0;
    }
    
    
    
  
