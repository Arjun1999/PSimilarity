#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    int count = 0;
    while (t>0){
        int num;
        scanf("%d", &num);
        count = count + num;
        t = t -1;
    }
    printf("%d", count);
    return 0;
}
