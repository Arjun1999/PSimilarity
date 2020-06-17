#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i;
     scanf("%d",&n);
     long long int a[n],sum=0;
     for(i=0;i<n;i++)
         {
         scanf("%lld",&a[i]);
         sum=sum+a[i];
     }
    printf("%lld",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
