#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int a=0;
    int b=0,c,k;
    for(scanf("%d",&c);++b<=c;scanf("%d",&k),a+=k);
    printf("%ld",a);
    return 0;
}
