#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,ar[1000],sum=0;
    scanf("%d",&n);
    while(n--){scanf("%d",&ar[n]);sum=sum+ar[n];}
    printf("%d",sum);
    return 0;
}
