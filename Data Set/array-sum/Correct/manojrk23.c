#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        sum+=j;
    }
    printf("%d",sum);
    return 0;
}
