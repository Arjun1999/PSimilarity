#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,i,s=0,a[1000];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d ",&a[i]);
            s+=a[i];
    }
    printf("%d",s);
    return 0;
}
