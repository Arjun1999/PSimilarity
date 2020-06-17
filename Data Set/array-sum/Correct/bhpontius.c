#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,num,sum;
    scanf("%d",&n);
    sum=0;
    for (i=0; i<n; i++){
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum);  
    return 0;
}
