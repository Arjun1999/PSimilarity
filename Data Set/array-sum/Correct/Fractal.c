#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N, n;
    int sum=0;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &n);
        sum += n;
    }
    printf("%d", sum);
    return 0;
}
