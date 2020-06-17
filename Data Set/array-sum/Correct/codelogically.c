#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long n,i,a[1000],s=0;
    scanf("%ld",&n); 
    
        for(i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
        s=s+a[i];
    }
  printf("%ld",s);
    return 0;
}
