#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    int a[1000];
    long int sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        {
        scanf("%d/n",&a[i]);
    }
    for(j=0; j<n; j++)
        {
        sum=sum+a[j];
    }
    printf("%ld",sum);
    return 0;
}
