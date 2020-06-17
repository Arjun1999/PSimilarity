#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y,total,i;
    scanf("%d",&x);

    total=0;
    for(i=0; i<x; i++){

    scanf("%d",&y);
    total=total+y;

    }


    printf("%d",total);

    return 0;
}
