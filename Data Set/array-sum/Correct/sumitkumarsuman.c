#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

   int main() {
    int s=0, n, a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
            s=s+a[i];
    }
printf("%d",s);   
    return 0;
}
