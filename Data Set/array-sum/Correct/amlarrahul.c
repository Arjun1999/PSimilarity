#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,sum=0,n,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&t);
            sum=sum+t;
    }
    printf("%d",sum);
    return 0;
}
