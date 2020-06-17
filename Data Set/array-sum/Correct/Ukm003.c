#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,m;
    scanf("%d",&m);
    int a,b=0;
    for(i=0;i<m;i++){
        scanf("%d",&a);
        b+=a;
        
    }
    printf("%d",b);
    return 0;
}
