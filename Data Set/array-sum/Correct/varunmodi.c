#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long int sum=0;
    int n,i,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%ld",sum);
    return 0;
}
