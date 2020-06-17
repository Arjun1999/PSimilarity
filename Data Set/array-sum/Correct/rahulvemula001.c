#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,s;
    scanf("%d",&n);
    int a[n];
    for(i=0,s=0;i<=n-1;i++)
        {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%d",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
