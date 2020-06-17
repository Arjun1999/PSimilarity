#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b[1000];
    scanf("%d",&a);
    int i,sum=0;
    for(i=0;i<a;i++)
        scanf("%d ",&b[i]);
    for(i=0;i<a;i++)
        sum=sum+b[i];
    printf("%d",sum);
    return 0;
}
