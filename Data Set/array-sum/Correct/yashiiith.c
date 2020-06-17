#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,a,c=0,n;
    scanf("%d\n",&n);

    for(i=0;i<n;i++)
        {
        scanf("%d",&a);
        c=c+ a;
         }
printf("%d\n",c);
    return 0;
}

