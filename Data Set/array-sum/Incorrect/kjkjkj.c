#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,a[10],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a);
    for(i=0;i<n;i++)
        s=s+a[i];
    printf("%d",s);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
