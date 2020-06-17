#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long i,j,a[1000],sum=0;
    scanf("%ld\n",&j);
    for(i=0;i<j;i++)
    {
        scanf("%ld ",&a[i]);
        sum+=a[i];
    }
    printf("%ld",sum);
    return 0;
}
