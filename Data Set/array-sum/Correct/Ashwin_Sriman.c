#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,a;
    long int sum=0;
    scanf(" %d ",&n);
    while(n--)
    {
        scanf(" %d ",&a);
        sum+=a;
    }
    printf("%ld",sum);
    
    return 0;
}
