#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,a,b=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        b+=a;
    }
    printf("%d",b);
    return 0;
}
