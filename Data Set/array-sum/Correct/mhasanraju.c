#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,b,c[1000];
    long sum=0;
    scanf("%d",&a);
    for(b=0;b<a;b++)
        scanf("%d",&c[b]);
    for(b=0;b<a;b++)
        sum=sum+c[b];
    printf("%ld",sum);
        
    return 0;
}
