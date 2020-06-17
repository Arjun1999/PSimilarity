#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0;
    int i,boyut;
    int dizi[1000];
    scanf("%d",&boyut);
    for(i=0;i<boyut;i++){
        scanf("%d",&dizi[i]);
        sum= sum+ dizi[i];
    }
    printf("%d",sum);
    return 0;
}
