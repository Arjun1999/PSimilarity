#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,sum=0,x;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &x);
        sum+=x;
    }
    printf("%d",sum);
    return 0;
}
