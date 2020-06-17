#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,x[10000],i,sum=0;
    scanf("%d",&n);
        for(i=0;i<n;i++)
            {
            scanf("%d",&x[i]);
            sum=sum+x[i];
        }
    printf("%d",sum);
    return 0;
}
