#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int a[1000],i,T,s=0;
    scanf("%d",&T);
    if(T>=1)
    for(i=0;i<T;i++)
        {
    scanf("%d",&a[i]);
        if(a[i]>1000)
            break;
s=s+a[i];
    }
    printf("%d",s);
    return 0;
}
