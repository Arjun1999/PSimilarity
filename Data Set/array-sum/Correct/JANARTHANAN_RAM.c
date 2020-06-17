#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int n,i,s=0,a[10000];
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
       { scanf("%d",&a[i]);
        s=s+a[i];
        }
    
    
    printf("%d",s);
    return 0;
}
