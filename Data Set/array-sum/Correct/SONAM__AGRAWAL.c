#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,*a,n,m;
    m=0;
    scanf("%d",&n);
      a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
            m=m+a[i];
    }
    printf("%d",m);
    return 0;
}
