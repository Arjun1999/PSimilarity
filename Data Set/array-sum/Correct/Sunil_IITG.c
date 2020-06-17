#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int N;
    scanf("%d",&N);
    int *P=(int*)calloc (N,sizeof(4));
    int i,sum=0;
    for (i=0;i<N;i++){
        scanf("%d",P+i);
        sum =sum+P[i];
    }
    printf("%d\n",sum);
    return 0;
}
