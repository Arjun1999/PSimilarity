#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],b;
    int n,i;
    b=0;
 scanf("%d",&n);
     for(i=1;i<=n;i++)
            {
            scanf("%d",&a[i]);
            
    
        b=b+a[i];
       
            }
    printf("%d",b);
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
