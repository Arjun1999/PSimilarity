#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int c=0,n,a[1001],i;
  scanf("%d ",&n)  ;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    printf("%d",c);
    return 0;
}
