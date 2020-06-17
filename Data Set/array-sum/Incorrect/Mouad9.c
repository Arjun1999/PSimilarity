#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N , Som,i;
    int T[N];
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        scanf("%d",&T[i]);
        Som=Som+T[i];
        
    }
printf("Somme :%d",Som);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
