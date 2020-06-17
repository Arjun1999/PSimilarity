#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,tot,sum=0,A[1000];
    scanf("%d",&tot);
    for(i=0;i<tot;i++){
        scanf("%d",&A[i]);
    }
        for(i=0;i<tot;i++){
        sum=sum+A[i];
    }
    printf("%d",sum);    
    return 0;
}
