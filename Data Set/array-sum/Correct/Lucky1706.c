#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,sum=0,i,temp;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&temp);
        sum=sum+temp;
    }
    printf("%d",sum);  
    return 0;
}
