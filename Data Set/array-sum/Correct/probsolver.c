#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   long int b=0;
    int n,i,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        b=b+a[i];
    }
     
    printf("%ld",b);
    return 0;
}
