#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    long long int a,b=0;
    while(n--)
        {
        scanf("%llu",&a);
        b+=a;
    }
    printf("%llu",b);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
