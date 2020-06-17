#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A[1000], i, n, sum=0;
    scanf("%d\n", &n);
    for(int i=0; i<n; i++)
        { scanf("%d", &A[i]);
          sum=sum+A[i];
        }
    printf("%d", sum);
    
    return 0;
}
