#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
long int a=0,b=0;
    
    scanf("%d\n",&n);
    while  (n!=0){
        scanf("%d",&b);
        a+=b;
        --n;
    }
    printf("%d",a);
    return 0;
}
