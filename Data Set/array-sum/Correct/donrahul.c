#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int s=0,a,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d ",&a);
        s=s+a;        
        }
    printf("%d",s);
    return 0;
}
