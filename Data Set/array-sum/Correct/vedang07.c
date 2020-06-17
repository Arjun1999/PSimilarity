#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long int N,a[1000],i,sum=0;
    scanf("%ld",&N);
    for(i=0;i<N;i++)
    {
        scanf("%ld",&a[i]);
        sum+=a[i];
    }
    printf("%ld",sum);
    return 0;
}
