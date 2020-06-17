#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 10000
int main() {

    int n,i,a[SIZE],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("%d",sum);
    
    return 0;
}
