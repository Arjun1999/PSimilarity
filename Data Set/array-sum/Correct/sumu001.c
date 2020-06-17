#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size=0, elem=0, sum=0;
    scanf("%d", &size);
    for(;size>0;size--){
        scanf("%d", &elem);
        sum+=elem;
    }
    printf("%d",sum);
    return 0;
}
