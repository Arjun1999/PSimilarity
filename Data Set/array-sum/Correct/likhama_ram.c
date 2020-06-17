#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int b=0;
    int i,a;
    scanf("%d",&a);
    while(a--)
        {
        scanf("%d",&i);
        b+=i;
    }
    printf("%lld",b);
    return 0;
}
