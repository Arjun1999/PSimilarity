#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,t;
    long sum=0;
    scanf("%d",&n);
    while(n--)
        {
        scanf("%d",&t);
        sum+=t;
    }
    printf("%ld",sum);
    return 0;
}
