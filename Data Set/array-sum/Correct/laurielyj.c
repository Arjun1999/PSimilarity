#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, i;
    scanf("%d", &N);
    int p;
    p = 0;
    int now;
    for (i=0;i<N;i++){
        scanf("%d", &now);
        p = p + now;        
    }
    printf("%d\n", p);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
