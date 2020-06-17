#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size,ans=0;
    int i, j, k;
    scanf("%d", &size);
    for(i=0; i<size;i++){
        scanf("%d", &j);
        ans += j;
    }
    printf("%d", ans);
    return 0;
}
