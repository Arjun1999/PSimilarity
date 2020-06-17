#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,temp;
    long sum=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("%d",sum);
    return 0;
}
