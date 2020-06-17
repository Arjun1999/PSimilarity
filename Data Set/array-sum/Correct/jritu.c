#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,a;
    long long sum=0;
    scanf("%d",&n);
    while(n--)
        {
            scanf("%d",&a);
            sum+=a;
        
    }
    printf("%lld",sum);
    return 0;
}
