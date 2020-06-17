#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int i, N, sum=0;
    scanf("%ld\n",&N);
    long int a[1000];
    for(i=0;i<N;i++){
        scanf("%ld ",&a[i]);
        sum=sum+a[i];
    }
    printf("%ld", sum);
    return 0;
}
