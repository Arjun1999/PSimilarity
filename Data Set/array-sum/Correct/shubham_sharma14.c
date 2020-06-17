#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,b,c=0,d[10000];
    scanf("%d",&a);
    for(b=0;b<a;b++)
        {
        scanf("%d",&d[b]);
    }
    for(b=0;b<a;b++)
        c=c+d[b];
    
    printf("%d",c);
    
    return 0;
}
