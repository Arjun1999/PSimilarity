#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int i,j,k,l,N[1000];  
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d",&N[i]);
    }
    l=0;
    for(j=0;j<k;j++){
        l=N[j]+l;
    }
    printf("%d\n",l);
    return 0;
}
