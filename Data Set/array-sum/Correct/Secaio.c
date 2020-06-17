#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, i, vec, count;
    scanf("%d",&n);
    count = 0;
    for ( i = 0;i < n; i++ ) { 
        scanf("%d",&vec);
        count += vec;
    }
    printf("%d\n",count);
    return 0;
}
