#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int j,t,a,sum;
    scanf("%d",&t);
    for(j=0;j<t;j++){
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d",sum);
    
    return 0;
}
