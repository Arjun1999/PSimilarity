#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,i;
    int sum=0;
    int a[n];
    
    scanf("%d",&n);
    
    
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
  
     for(i=0;i<=n;i++)
     {sum=sum+a[i];
       
    }
    
    printf("%d",sum);
    return 0;
}
