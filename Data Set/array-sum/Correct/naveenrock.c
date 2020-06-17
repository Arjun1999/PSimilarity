#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 long int n,a,sum=0,i;
    scanf("%ld",&n);
   for(i=0;i<n;i++)
   {
       scanf("%ld ",&a);
       sum=sum+a;
   }    
   printf("%ld",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
