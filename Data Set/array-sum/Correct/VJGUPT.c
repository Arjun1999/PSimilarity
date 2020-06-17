#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int N , A[1000] ,i,a=0,sum=0;
            scanf("%d",&N);
    for( i=0 ; i<N; i++ )
        {
        scanf("%d",&a);
        sum = sum + a;
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
