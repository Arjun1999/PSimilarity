#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[1000],i,n,c=0;
    scanf("%d",&n);    
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
        c+=a[i];
    }    
    printf("%d",c); 
    return 0;
}
