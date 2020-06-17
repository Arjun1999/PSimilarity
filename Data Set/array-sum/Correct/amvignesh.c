#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int c=0,i,a[1000],n;
    
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    printf("%d",c);
    return 0;
}
