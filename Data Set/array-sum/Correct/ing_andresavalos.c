#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N,i=0,tot=0;
    scanf("%d",&N);
    int array[N];
    for(i=0;i<N;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<N;i++){
        tot=tot+array[i];
    }
    printf("%d",tot);
    return 0;
}