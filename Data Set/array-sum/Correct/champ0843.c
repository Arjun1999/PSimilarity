#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n,i,k;
    long int sum=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&k);
        sum=sum+k;
    }
    printf("%ld",sum);
    return 0;
}
