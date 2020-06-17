#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    int x,sum=0;
    scanf("%d",&N);
    for(int i=1; i <= N;i++){
        scanf("%d",&x);
        sum = sum+x;
    }
    printf("%d\n",sum);
    return 0;
}
