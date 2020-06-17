#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100
int main() {
    int n,a[max],sum=0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("%d\n", sum);
    return 0;
}
