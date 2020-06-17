#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  long int n,i,j;
    scanf("%ld",&n);
    
    long int a[n];
    
    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
    
    long int sum=0;
    
    for(j=0;j<n;j++)
        sum=sum+a[j];
    
    printf("%ld",sum);
    return 0;
}
