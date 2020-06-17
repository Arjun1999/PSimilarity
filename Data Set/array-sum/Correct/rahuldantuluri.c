#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,sum=0,temp;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        sum=sum+temp;
    }
    printf("%d",sum);
    return 0;
}
