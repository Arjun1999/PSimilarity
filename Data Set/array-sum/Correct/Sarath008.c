#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,b,n,a[1000],sum=0;
    scanf("%d",&b);
    
    for(n=b,i=0;n>0;n--)
        {
        scanf("%d",&a[i]);
        i++;
    }
     for(i=0;i<b;i++)
         {
        sum=sum+a[i]; 
     }
    printf("%d",sum);
    return 0;
}
