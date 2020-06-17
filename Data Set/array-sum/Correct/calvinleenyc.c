#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N; scanf("%d", &N);
    int ans = 0;
    for(int i=0;i<N;i++){
        int t; scanf("%d", &t);
        ans = ans + t;
    }
    printf("%d\n", ans);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
