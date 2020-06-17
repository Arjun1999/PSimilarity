
#include <stdio.h>
int main() 
{
   long int a[100],b[100],i,sum=0,max,min,n; 
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
       scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    
    for(i=0;i<n;i++)
     {
        b[i]=sum-a[i];
    }
    min=max=b[0];
    for(i=0;i<n;i++)
    {
    if(max<b[i])
    max=b[i];
    if(min>b[i])
    min=b[i];
    }
    printf("%ld  %ld",min,max);
    return 0;
}

