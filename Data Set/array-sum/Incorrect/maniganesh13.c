#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int b[6],s=0,a,v;
    
    scanf("%d",&v);
    for(a=0;a<v;a++)
    {
        scanf("%d",&b[a]);
        s=s+b[a];
    } 
    printf("%d",s);

    return 0;
}
