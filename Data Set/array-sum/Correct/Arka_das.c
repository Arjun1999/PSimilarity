#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,sum=0,a;
    scanf("%d",&i);
    for(j=0;j<i;j++)
        {
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}
