#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,t,i;
    long int sum = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&t);
        sum = sum + t;
    }
    printf("%ld",sum);
    return 0;
}
