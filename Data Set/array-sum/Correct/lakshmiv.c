#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,m=0,n,a[50000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d\t",&a[i]);
        m+=a[i];
        }
    printf("%d",m);
    return 0;
}
