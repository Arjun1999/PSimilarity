#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define N 1000
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    long int a,sum=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        {
        scanf("%ld",&a);
        sum +=a;
    }
    printf("%ld",sum);
    
    
        
    return 0;
}
