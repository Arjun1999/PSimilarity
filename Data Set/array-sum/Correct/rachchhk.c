#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N,i,j,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        {
            scanf("%d ",&j);
            sum = sum+j;
        }
    printf("%d",sum);
    return 0;
}
