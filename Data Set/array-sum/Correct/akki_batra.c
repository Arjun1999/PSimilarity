#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,temp,sum=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("%d",sum);
    return 0;
}
