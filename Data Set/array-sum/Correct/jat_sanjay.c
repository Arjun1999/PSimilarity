#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int n,a[1000],s=0;
        scanf("%d",&n);
      while(n--)
          {
          scanf("%d",&a[n]);
          s=s+a[n];
          
      }
    printf("%d",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
