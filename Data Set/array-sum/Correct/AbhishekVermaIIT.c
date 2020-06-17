#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n ;
    scanf("%d",&n) ;
    int i, value, sum=0 ;
    for (i=0; i<n; i++) {
        scanf("%d",&value) ;
        sum += value ;
    }
    printf("%d",sum) ;
    return 0;
}
