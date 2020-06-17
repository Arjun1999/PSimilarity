#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int a,b,s=0,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
        {
        scanf("%d",&b);
        s=s+b;
    }
    printf("%d",s);
    return 0;
}
