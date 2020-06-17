#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],max,min,smax,smin;
    max=min=smax=amin=0;
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        
        if(max<a[i])
            max=a[i];
        
        if(min>a[i])
            min=a[i];
    }
    
    for(i=0;i<5;i++)
    {
        if(a[i]!=max)
            smin=smin+a[i];
        
        if(a[i]!=min)
            smax=smax+a[i];
    }
    
    printf("%d %d",smin,smax);
    return 0;
}