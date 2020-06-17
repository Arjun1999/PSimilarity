#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int nele, a[1000], sum, i;
    scanf("%d", &nele);
    for(i=0, sum=0;i<nele;i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("%d" ,sum);
    return 0;
}
