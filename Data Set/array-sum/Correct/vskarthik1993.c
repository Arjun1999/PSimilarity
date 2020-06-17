#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, sum=0, b;
    scanf("%d", &n);
    int  i;
    for(i=0;i<n;i++)
        {
        scanf("%d", &b);
        sum+=b;
    }
    
    printf("%d\n", sum);
    return 0;
}
