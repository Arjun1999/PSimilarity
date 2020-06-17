#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

            int i,n,s=0;
            scanf("%d",&n);
            int a[n];
            for(i=1;i<=n;i++)
                {
                    scanf("%d",&a[i]);
            }
            for(i=1;i<=n;i++)
                {
                    s=s+a[i];
                      
            }
            printf("%d",s);
    return 0;
}
