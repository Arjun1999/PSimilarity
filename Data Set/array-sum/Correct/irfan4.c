#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,sum=0,n,x;
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        scanf("%d",&x);
    sum=sum+x;
    }
    printf("%d",sum);
    return 0;
}
