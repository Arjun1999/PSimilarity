#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N, i, v, num, sum = 0;
    scanf("%d", &N);
    for(i=0;i<N;i++){
        num = scanf("%d", &v);
        if(num<0) break;
        sum += v;
    }
    printf("%d", sum);
    return 0;
}
