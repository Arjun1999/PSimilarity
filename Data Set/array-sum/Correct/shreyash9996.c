#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    int n,i,b,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {scanf("%d",&b);
         sum=sum+b;
    }
    printf("%d",sum);
    return 0;
}
