#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0,n,a[1000];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
    }
    printf("%d\n",sum);
    return 0;
}
