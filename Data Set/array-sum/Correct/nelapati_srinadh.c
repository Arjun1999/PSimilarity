#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,t=0,g;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&g);
        t=t+g;
    }
    printf("%d",t);
    return 0;
}
