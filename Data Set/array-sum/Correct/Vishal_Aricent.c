#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, sum=0;
    int temp;
    int i;
    
    scanf("%d", &N);
    
    for(i=0; i<N; i++){
        scanf("%d", &temp);
        sum+=temp;
    }
    
    printf("%d", sum);
    
    return 0;
}
