#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0,num,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum);
    return 0;
}
