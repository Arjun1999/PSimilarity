#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int i,k,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        sum+=k;
    }
    printf("%d",sum);
    return 0;
}
