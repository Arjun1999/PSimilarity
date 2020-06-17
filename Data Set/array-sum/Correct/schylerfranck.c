#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, i=0, Sum = 0, temp;
    scanf("%d",&N);
    while(i<N){
       scanf("%d",&temp);
        Sum += temp;
        i++;
    }
    printf("%d", Sum);
    return 0;
}
