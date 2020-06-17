#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int length,sum=0;
    scanf("%d",&length);
    int a[length];
    for(int i=0;i<length;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
