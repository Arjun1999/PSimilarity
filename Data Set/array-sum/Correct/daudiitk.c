#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,s,r;
    s=0;
    scanf("%d",&n);
   int a[n];
    for(i=0;i<n;i++)
        a[i]=0;
    for(i=0;i<n;i++)
    {    scanf("%d ",&r);
        a[i]=r;
    }
    for(i=0;i<n;i++)
        s=s+a[i];
    printf("%d",s);
    
    return 0;
}
