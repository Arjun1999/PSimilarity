#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    long sum=0;
    long a[1000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
     {
        
      scanf("%lu ",&a[i]);
      sum+=a[i];
    }
     printf("%lu",sum);
    return 0;
}
