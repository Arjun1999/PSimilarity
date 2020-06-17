#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int a[5];
    int n,i,sum=0;
    if(n<=1000)
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       
        scanf("%d",&a[i]);
         if(a[i]<=1000)    
        sum=sum+a[i];
}
printf("%d",sum);
}