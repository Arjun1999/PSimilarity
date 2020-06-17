#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a;
    long int c=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        c+=a;
    }
    printf("%ld",c);
    
     
    return 0;
}
