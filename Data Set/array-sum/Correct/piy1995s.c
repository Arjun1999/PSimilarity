#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,sum = 0,N,arr[1001];
    scanf("%d",&N);
    
    for(i=0; i<N; i++){
        scanf("%d",&arr[i]);   
    }
    for(i=0; i<N; i++){
        sum = sum + arr[i];
    }
    
    printf("%d",sum);
    return 0;
}
