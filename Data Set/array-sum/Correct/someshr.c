#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        sum+=x;
    }
    printf("%d\n",sum);
    return 0;
}
