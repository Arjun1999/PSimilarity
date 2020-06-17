#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, n, m;
    int sumi;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d", &n);
    sumi = 0;

    for (i=0;i<n;i++) {
        scanf(" %d", &m);
        sumi +=  m;
    }
    
    printf("%d\n", sumi);
    return 0;
}
