#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long n,i,a[1000];
    long sum=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
        {
           scanf("%ld",&a[i]); 
        }
    for(i=0;i<n;i++)
        {
           sum=sum+a[i]; 
        }
    printf("%ld",sum);
    return 0;
}
