#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, temp;
    scanf("%d",&N);
    int sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%d",&temp);
        sum += temp;
    }
    printf("%d\n",sum);
    return 0;
}
