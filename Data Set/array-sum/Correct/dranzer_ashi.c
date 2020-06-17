#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,x,s=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        s+=x;
    }
    printf("%d\n",s);
    return 0;
}
