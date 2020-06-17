#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    long long int a,b=0;
    scanf("%d",&n);
        while(n--)
        {
       scanf("%lld",&a);
            b=b+a;
    }
    printf("%lld",b);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
