#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n],max=0;
    int i;
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
        max=max+a[i];
    }
    printf("%d",max);

    return 0;
}
